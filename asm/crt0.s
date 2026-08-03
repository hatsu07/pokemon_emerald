.include "asm/macros.inc"
.include "constants/constants.inc"

.section .text
.syntax unified
.arm

@ ---------------------------------------------------------------------------
@ GBA cartridge header
@ ROM: 0x08000000 - 0x080000BF
@ ---------------------------------------------------------------------------

	arm_func_start _start
_start: @ 0x08000000
	b Init

@ 0x08000004 - 0x0800009F
@ Nintendo logo data checked by the GBA BIOS.
gNintendoLogo:
	.incbin "graphics/gba_nintendo_logo.bin"

@ 0x080000A0 - 12-byte internal title.
gRomHeaderGameTitle:
	.ascii "POKEMON EMER"

@ 0x080000AC - 4-byte game code.
@ BPEJ = Japanese Pokémon Emerald.
gRomHeaderGameCode:
	.ascii "BPEJ"

@ 0x080000B0 - 2-byte maker code.
@ "01" identifies Nintendo.
gRomHeaderMakerCode:
	.ascii "01"

@ 0x080000B2 - Fixed header value required by the BIOS.
gRomHeaderFixedValue:
	.byte 0x96

@ 0x080000B3 - Main unit code.
gRomHeaderMainUnitCode:
	.byte 0

@ 0x080000B4 - Device type.
gRomHeaderDeviceType:
	.byte 0

@ 0x080000B5 - 0x080000BB
gRomHeaderReserved1:
	.space 7, 0

@ 0x080000BC - Software revision.
gRomHeaderSoftwareVersion:
	.byte 0

@ 0x080000BD - Header complement checksum.
gRomHeaderChecksum:
	.byte 0x6D

@ 0x080000BE - 0x080000BF
gRomHeaderReserved2:
	.space 2, 0

gRomHeaderPadding:
	.space 0x10, 0x00

gRomHeaderReserved:
	.space 0x30, 0xFF

.LmetadataHeader:
	.4byte 3
	.4byte 1
	.asciz "pokemon emerald version"
	.space 8

.LmetadataPointers0:
	.4byte gMonFrontPicTable
	.4byte gMonBackPicTable
	.4byte gMonPaletteTable
	.4byte gMonShinyPaletteTable
	.4byte gMonIconTable
	.4byte gMonIconPaletteIndices
	.4byte gMonIconPaletteTable
	.4byte gSpeciesNames
	.4byte gMoveNames
	.4byte gDecorations

.LgfRomHeaderSaveMetadata:
	.4byte SAVE_BLOCK1_FLAGS_OFFSET
	.4byte SAVE_BLOCK1_VARS_OFFSET
	.4byte SAVE_BLOCK2_POKEDEX_OFFSET
	.4byte SAVE_BLOCK1_SEEN1_OFFSET
	.4byte SAVE_BLOCK1_SEEN2_OFFSET
	.4byte VAR_NATIONAL_DEX - VARS_START
	.4byte FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	.4byte FLAG_SYS_MYSTERY_EVENT_ENABLE
	.4byte NATIONAL_DEX_COUNT

.LgfRomHeaderNameLengths:
	.byte PLAYER_NAME_LENGTH
	.byte TRAINER_NAME_LENGTH
	.byte POKEMON_NAME_LENGTH
	.byte POKEMON_NAME_LENGTH_SHORT
	.byte 7  @ unk5
	.byte 8  @ unk6
	.byte 6  @ unk7
	.byte 7  @ unk8
	.byte 4  @ unk9
	.byte 10 @ unk10
	.byte 18 @ unk11
	.byte 10 @ unk12
	.byte 10 @ unk13
	.byte 5  @ unk14
	.byte 1  @ unk15
	.byte 8  @ unk16
	.byte 7  @ unk17
	.space 3

.LgfRomHeaderSaveLayout:
	.4byte SAVE_BLOCK2_SIZE
	.4byte SAVE_BLOCK1_SIZE
	.4byte SAVE_BLOCK1_PLAYER_PARTY_COUNT_OFFSET
	.4byte SAVE_BLOCK1_PLAYER_PARTY_OFFSET
	.4byte SAVE_BLOCK2_SPECIAL_SAVE_WARP_FLAGS_OFFSET
	.4byte SAVE_BLOCK2_PLAYER_TRAINER_ID_OFFSET
	.4byte SAVE_BLOCK2_PLAYER_NAME_OFFSET
	.4byte SAVE_BLOCK2_PLAYER_GENDER_OFFSET
	.4byte SAVE_BLOCK2_FRONTIER_CHALLENGE_STATUS_OFFSET
	.4byte SAVE_BLOCK2_FRONTIER_CHALLENGE_STATUS_OFFSET
	.4byte SAVE_BLOCK1_EXTERNAL_EVENT_FLAGS_OFFSET
	.4byte SAVE_BLOCK1_EXTERNAL_EVENT_DATA_OFFSET
	.4byte 0 @ unk18

.LgfRomHeaderDataPointers:
	.4byte gSpeciesInfo
	.4byte gAbilityNames
	.4byte gAbilityDescriptions
	.4byte gItemsInfo
	.4byte gBattleMoves
	.4byte gBallSpriteSheets
	.4byte gBallSpritePalettes

@ Flags and SaveBlock2 field used by GameCube link software.
@ Layout: gcnLinkFlags offset, game-clear flag ID, ribbon-obtained flag ID.
@ Remaining GF ROM-header save/link metadata.
.include "data/gf_rom_header.inc"

@ crt0-local constants. Values are chosen to preserve the original ROM bytes.
.set CRT0_SYSTEM_STACK_TOP,              IWRAM_END - 0x1C0
.set CRT0_IRQ_STACK_TOP,                 IWRAM_END - 0x60
.set CRT0_INTR_TABLE,                    0x030027B0
.set CRT0_STWI_STATUS_PTR,               0x03007608
.set CRT0_INTR_TABLE_ENTRY_SIZE,         4
.set CRT0_STWI_INTR_INDEX_OFFSET,        0xA
.set CRT0_NESTED_INTR_ALWAYS_FLAGS,      INTR_FLAG_SERIAL | INTR_FLAG_TIMER3 | INTR_FLAG_VCOUNT | INTR_FLAG_HBLANK

Init:
	mov r0, #PSR_IRQ_MODE
	msr cpsr_fc, r0
	ldr sp, .LIrqStackTop
	mov r0, #PSR_SYS_MODE
	msr cpsr_fc, r0
	ldr sp, .LSystemStackTop
	ldr r1, .LIntrVector
	adr r0, IntrMain
	str r0, [r1]
	ldr r1, .LAgbMainThumb
	mov lr, pc
	bx r1
	arm_func_end _start

	arm_func_start Init_Return
Init_Return: @ 0x08000234
	b Init
	.align 2, 0
.LSystemStackTop: .4byte CRT0_SYSTEM_STACK_TOP
.LIrqStackTop:    .4byte CRT0_IRQ_STACK_TOP
.LIntrVector:     .4byte INTR_VECTOR
@ AgbMain is Thumb code at 0x080003A4.
@ Function pointers to Thumb code store bit 0 as 1.
.LAgbMainThumb:   .4byte AgbMain + 1
	arm_func_end Init_Return

	arm_func_start IntrMain
IntrMain: @ 0x08000248
	mov r3, #REG_BASE
	add r3, r3, #OFFSET_REG_IE

	@ Read IE and IF together:
	@   r2[15:0]  = IE
	@   r2[31:16] = IF
	ldr r2, [r3]
	ldrh r1, [r3, #OFFSET_REG_IME - OFFSET_REG_IE]
	mrs r0, spsr
	push {r0, r1, r2, r3, lr}

	@ Disable master IRQs while selecting the interrupt to dispatch.
	mov r0, #0
	strh r0, [r3, #OFFSET_REG_IME - OFFSET_REG_IE]
	and r1, r2, r2, lsr #16 @ r1 = IE & IF

	@ ip is the byte offset into the interrupt-handler table.
	mov ip, #0

	@ Interrupt priority order:
	@ VCount, Serial, Timer3, HBlank, VBlank, Timer0-2,
	@ DMA0-3, Keypad, Game Pak.
	ands r0, r1, #INTR_FLAG_VCOUNT
	bne IntrMain_FoundIntr
	add ip, ip, #CRT0_INTR_TABLE_ENTRY_SIZE

	@ Non-VCount handlers may be interrupted by the restricted IRQ set below.
	mov r0, #1
	strh r0, [r3, #OFFSET_REG_IME - OFFSET_REG_IE]

	ands r0, r1, #INTR_FLAG_SERIAL
	bne IntrMain_FoundIntr
	add ip, ip, #CRT0_INTR_TABLE_ENTRY_SIZE
	ands r0, r1, #INTR_FLAG_TIMER3
	bne IntrMain_FoundIntr
	add ip, ip, #CRT0_INTR_TABLE_ENTRY_SIZE
	ands r0, r1, #INTR_FLAG_HBLANK
	bne IntrMain_FoundIntr
	add ip, ip, #CRT0_INTR_TABLE_ENTRY_SIZE
	ands r0, r1, #INTR_FLAG_VBLANK
	bne IntrMain_FoundIntr
	add ip, ip, #CRT0_INTR_TABLE_ENTRY_SIZE
	ands r0, r1, #INTR_FLAG_TIMER0
	bne IntrMain_FoundIntr
	add ip, ip, #CRT0_INTR_TABLE_ENTRY_SIZE
	ands r0, r1, #INTR_FLAG_TIMER1
	bne IntrMain_FoundIntr
	add ip, ip, #CRT0_INTR_TABLE_ENTRY_SIZE
	ands r0, r1, #INTR_FLAG_TIMER2
	bne IntrMain_FoundIntr
	add ip, ip, #CRT0_INTR_TABLE_ENTRY_SIZE
	ands r0, r1, #INTR_FLAG_DMA0
	bne IntrMain_FoundIntr
	add ip, ip, #CRT0_INTR_TABLE_ENTRY_SIZE
	ands r0, r1, #INTR_FLAG_DMA1
	bne IntrMain_FoundIntr
	add ip, ip, #CRT0_INTR_TABLE_ENTRY_SIZE
	ands r0, r1, #INTR_FLAG_DMA2
	bne IntrMain_FoundIntr
	add ip, ip, #CRT0_INTR_TABLE_ENTRY_SIZE
	ands r0, r1, #INTR_FLAG_DMA3
	bne IntrMain_FoundIntr
	add ip, ip, #CRT0_INTR_TABLE_ENTRY_SIZE
	ands r0, r1, #INTR_FLAG_KEYPAD
	bne IntrMain_FoundIntr
	add ip, ip, #CRT0_INTR_TABLE_ENTRY_SIZE

	@ A Game Pak IRQ means the cartridge was removed. Disable sound and stop.
	ands r0, r1, #INTR_FLAG_GAMEPAK
	strbne r0, [r3, #OFFSET_REG_SOUNDCNT_X - OFFSET_REG_IE]
IntrMain_GamePakHang:
	bne IntrMain_GamePakHang

IntrMain_FoundIntr:
	@ Acknowledge the selected interrupt and prevent it from re-entering.
	strh r0, [r3, #OFFSET_REG_IF - OFFSET_REG_IE]
	bic r2, r2, r0

	@ Build the restricted IE mask used while the handler runs.
	ldr r0, .LStwiStatusPtr
	ldr r0, [r0]
	ldrb r0, [r0, #CRT0_STWI_INTR_INDEX_OFFSET]
	mov r1, #INTR_FLAG_TIMER0
	lsl r0, r1, r0
	orr r0, r0, #INTR_FLAG_GAMEPAK
	orr r1, r0, #CRT0_NESTED_INTR_ALWAYS_FLAGS
	and r1, r1, r2
	strh r1, [r3]

	@ Run the selected handler in System mode using the System stack.
	mrs r3, cpsr
	bic r3, r3, #PSR_I_BIT | PSR_F_BIT | PSR_MODE_MASK
	orr r3, r3, #PSR_SYS_MODE
	msr cpsr_fc, r3

	ldr r1, .LIntrTable
	add r1, r1, ip
	ldr r0, [r1]
	stmdb sp!, {lr}
	adr lr, IntrMain_Return
	bx r0
	arm_func_end IntrMain

	arm_func_start IntrMain_Return
IntrMain_Return: @ 0x08000374
	ldm sp!, {lr}

	@ Return to IRQ mode with IRQs disabled before restoring IRQ-bank state.
	mrs r3, cpsr
	bic r3, r3, #PSR_I_BIT | PSR_F_BIT | PSR_MODE_MASK
	orr r3, r3, #PSR_I_BIT | PSR_IRQ_MODE
	msr cpsr_fc, r3

	pop {r0, r1, r2, r3, lr}
	strh r2, [r3] @ Restore IE.
	strh r1, [r3, #OFFSET_REG_IME - OFFSET_REG_IE] @ Restore IME.
	msr spsr_fc, r0
	bx lr

	.align 2, 0
.LStwiStatusPtr: .4byte CRT0_STWI_STATUS_PTR
.LIntrTable:     .4byte CRT0_INTR_TABLE
	arm_func_end IntrMain_Return
