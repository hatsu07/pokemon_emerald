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
	b _init

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

_init:
	mov r0, #0x12
	msr cpsr_fc, r0
	ldr sp, _0800023C
	mov r0, #0x1f
	msr cpsr_fc, r0
	ldr sp, _08000238
	ldr r1, _08000240
	add r0, pc, #0x20
	str r0, [r1]
	ldr r1, _08000244
	mov lr, pc
	bx r1
	arm_func_end _start

	arm_func_start _init.ret
_init.ret: @ 0x08000234
	b _init
	.align 2, 0
_08000238: .4byte 0x03007E40
_0800023C: .4byte 0x03007FA0
_08000240: .4byte 0x03007FFC
_08000244: .4byte 0x080003A5
	arm_func_end _init.ret

	arm_func_start _intr
_intr: @ 0x08000248
	mov r3, #0x4000000
	add r3, r3, #0x200
	ldr r2, [r3]
	ldrh r1, [r3, #8]
	mrs r0, spsr
	push {r0, r1, r2, r3, lr}
	mov r0, #0
	strh r0, [r3, #8]
	and r1, r2, r2, lsr #16
	mov ip, #0
	ands r0, r1, #4
	bne _08000320
	add ip, ip, #4
	mov r0, #1
	strh r0, [r3, #8]
	ands r0, r1, #0x80
	bne _08000320
	add ip, ip, #4
	ands r0, r1, #0x40
	bne _08000320
	add ip, ip, #4
	ands r0, r1, #2
	bne _08000320
	add ip, ip, #4
	ands r0, r1, #1
	bne _08000320
	add ip, ip, #4
	ands r0, r1, #8
	bne _08000320
	add ip, ip, #4
	ands r0, r1, #0x10
	bne _08000320
	add ip, ip, #4
	ands r0, r1, #0x20
	bne _08000320
	add ip, ip, #4
	ands r0, r1, #0x100
	bne _08000320
	add ip, ip, #4
	ands r0, r1, #0x200
	bne _08000320
	add ip, ip, #4
	ands r0, r1, #0x400
	bne _08000320
	add ip, ip, #4
	ands r0, r1, #0x800
	bne _08000320
	add ip, ip, #4
	ands r0, r1, #0x1000
	bne _08000320
	add ip, ip, #4
	ands r0, r1, #0x2000
	strbne r0, [r3, #-0x17c]
_0800031C:
	bne _0800031C
_08000320:
	strh r0, [r3, #2]
	bic r2, r2, r0
	ldr r0, _0800039C
	ldr r0, [r0]
	ldrb r0, [r0, #0xa]
	mov r1, #8
	lsl r0, r1, r0
	orr r0, r0, #0x2000
	orr r1, r0, #0xc6
	and r1, r1, r2
	strh r1, [r3]
	mrs r3, cpsr
	bic r3, r3, #0xdf
	orr r3, r3, #0x1f
	msr cpsr_fc, r3
	ldr r1, _080003A0
	add r1, r1, ip
	ldr r0, [r1]
	stmdb sp!, {lr}
	add lr, pc, #0
	bx r0
	arm_func_end _intr

	arm_func_start _intr.ret
_intr.ret: @ 0x08000374
	ldm sp!, {lr}
	mrs r3, cpsr
	bic r3, r3, #0xdf
	orr r3, r3, #0x92
	msr cpsr_fc, r3
	pop {r0, r1, r2, r3, lr}
	strh r2, [r3]
	strh r1, [r3, #8]
	msr spsr_fc, r0
	bx lr
	.align 2, 0
_0800039C: .4byte 0x03007608
_080003A0: .4byte 0x030027B0
	arm_func_end _intr.ret
