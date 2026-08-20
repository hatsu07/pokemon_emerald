	@ pret/pokeemerald-jp direct xref for 0x085AC118: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085AC118
gBattleMessageData_085AC118: @ 0x085AC118
	@ analyzed canonical ROM range 0x085AC118-0x085AC12C
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x15 bytes=21
	.byte 0xFD, 0x20, 0x37, 0xFE, 0x0C, 0x36, 0x03, 0x48, 0x2D, 0x00, 0x0C, 0x06, 0x09, 0x13, 0x07, 0x10
	.byte 0xAB, 0xFC, 0x08, 0x31, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085AC12D: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085AC12D
gBattleMessageData_085AC12D: @ 0x085AC12D
	@ analyzed canonical ROM range 0x085AC12D-0x085AC145
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x19 bytes=25
	.byte 0xFD, 0x20, 0x14, 0x00, 0xFD, 0x21, 0x37, 0xFE, 0x0C, 0x36, 0x03, 0x48, 0x2D, 0x00, 0x0C, 0x06
	.byte 0x09, 0x13, 0x07, 0x10, 0xAB, 0xFC, 0x08, 0x31, 0xFF
	@ Four Japanese grammar groups used by ChooseMoveUsedParticle /
	@ ChooseTypeOfMoveUsedString. Each group is terminated by MOVE_NONE (0).
	.globl sGrammarMoveUsedTable
sGrammarMoveUsedTable: @ 0x085AC146
	.2byte MOVE_SWORDS_DANCE, MOVE_STRENGTH, MOVE_GROWTH, MOVE_HARDEN
	.2byte MOVE_MINIMIZE, MOVE_SMOKESCREEN, MOVE_WITHDRAW, MOVE_DEFENSE_CURL
	.2byte MOVE_EGG_BOMB, MOVE_SMOG, MOVE_BONE_CLUB, MOVE_FLASH
	.2byte MOVE_SPLASH, MOVE_ACID_ARMOR, MOVE_BONEMERANG, MOVE_REST
	.2byte MOVE_SHARPEN, MOVE_SUBSTITUTE, MOVE_MIND_READER, MOVE_SNORE
	.2byte MOVE_PROTECT, MOVE_SPIKES, MOVE_ENDURE, MOVE_ROLLOUT
	.2byte MOVE_SWAGGER, MOVE_SLEEP_TALK, MOVE_HIDDEN_POWER, MOVE_PSYCH_UP
	.2byte MOVE_EXTREME_SPEED, MOVE_FOLLOW_ME, MOVE_TRICK, MOVE_ASSIST
	.2byte MOVE_INGRAIN, MOVE_KNOCK_OFF, MOVE_CAMOUFLAGE, MOVE_ASTONISH
	.2byte MOVE_ODOR_SLEUTH, MOVE_GRASS_WHISTLE, MOVE_SHEER_COLD, MOVE_MUDDY_WATER
	.2byte MOVE_IRON_DEFENSE, MOVE_BOUNCE
	.2byte 0 @ end grammar group 0

	.2byte MOVE_TELEPORT, MOVE_RECOVER, MOVE_BIDE, MOVE_AMNESIA
	.2byte MOVE_FLAIL, MOVE_TAUNT, MOVE_BULK_UP
	.2byte 0 @ end grammar group 1

	.2byte MOVE_MEDITATE, MOVE_AGILITY, MOVE_MIMIC, MOVE_DOUBLE_TEAM
	.2byte MOVE_BARRAGE, MOVE_TRANSFORM, MOVE_STRUGGLE, MOVE_SCARY_FACE
	.2byte MOVE_CHARGE, MOVE_WISH, MOVE_BRICK_BREAK, MOVE_YAWN
	.2byte MOVE_FEATHER_DANCE, MOVE_TEETER_DANCE, MOVE_MUD_SPORT, MOVE_FAKE_TEARS
	.2byte MOVE_WATER_SPORT, MOVE_CALM_MIND
	.2byte 0 @ end grammar group 2

	.2byte MOVE_POUND, MOVE_SCRATCH, MOVE_VICE_GRIP, MOVE_WING_ATTACK
	.2byte MOVE_FLY, MOVE_BIND, MOVE_SLAM, MOVE_HORN_ATTACK
	.2byte MOVE_WRAP, MOVE_THRASH, MOVE_TAIL_WHIP, MOVE_LEER
	.2byte MOVE_BITE, MOVE_GROWL, MOVE_ROAR, MOVE_SING
	.2byte MOVE_PECK, MOVE_ABSORB, MOVE_STRING_SHOT, MOVE_EARTHQUAKE
	.2byte MOVE_FISSURE, MOVE_DIG, MOVE_TOXIC, MOVE_SCREECH
	.2byte MOVE_METRONOME, MOVE_LICK, MOVE_CLAMP, MOVE_CONSTRICT
	.2byte MOVE_POISON_GAS, MOVE_BUBBLE, MOVE_SLASH, MOVE_SPIDER_WEB
	.2byte MOVE_NIGHTMARE, MOVE_CURSE, MOVE_FORESIGHT, MOVE_CHARM
	.2byte MOVE_ATTRACT, MOVE_ROCK_SMASH, MOVE_UPROAR, MOVE_SPIT_UP
	.2byte MOVE_SWALLOW, MOVE_TORMENT, MOVE_FLATTER, MOVE_ROLE_PLAY
	.2byte MOVE_ENDEAVOR, MOVE_TICKLE, MOVE_COVET
	.2byte 0 @ end grammar group 3

	@ Japanese build uses a 12-byte BattleWindowText record. The final ten
	@ bytes map to fillValue/fontId/x/y/letterSpacing/lineSpacing/speed/
	@ fgColor/bgColor/shadowColor; the first two bytes are JP-only fields.
	.macro battle_window_text_jp jp0, jp1, fill, font, xpos, ypos, letter, line, speed, fg, bg, shadow
	.byte \jp0, \jp1, \fill, \font, \xpos, \ypos, \letter, \line, \speed, \fg, \bg, \shadow
	.endm

	.globl sTextOnWindowsInfo_Normal
sTextOnWindowsInfo_Normal: @ 0x085AC232 (24 x 12-byte JP records)
	battle_window_text_jp 0x00, 0x00, 0xFF, 0x01, 0x00, 0x02, 0x00, 0x00, 0x01, 0x01, 0x0F, 0x06 @ B_WIN_MSG
	battle_window_text_jp 0x00, 0x00, 0xFF, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x0F, 0x06 @ B_WIN_ACTION_PROMPT
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ B_WIN_ACTION_MENU
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ B_WIN_MOVE_NAME_1
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ B_WIN_MOVE_NAME_2
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ B_WIN_MOVE_NAME_3
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ B_WIN_MOVE_NAME_4
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0C, 0x0E, 0x0B @ B_WIN_PP
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ B_WIN_DUMMY
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0C, 0x0E, 0x0B @ B_WIN_PP_REMAINING
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ B_WIN_MOVE_TYPE
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ B_WIN_SWITCH_PROMPT
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ B_WIN_YESNO
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ B_WIN_LEVEL_UP_BOX
	battle_window_text_jp 0x00, 0x00, 0x00, 0x02, 0x20, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02 @ B_WIN_LEVEL_UP_BANNER
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ B_WIN_VS_PLAYER
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ B_WIN_VS_OPPONENT
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ B_WIN_VS_MULTI_PLAYER_1
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ B_WIN_VS_MULTI_PLAYER_2
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ B_WIN_VS_MULTI_PLAYER_3
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ B_WIN_VS_MULTI_PLAYER_4
	battle_window_text_jp 0x00, 0x00, 0x00, 0x02, 0x04, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x06 @ B_WIN_VS_OUTCOME_DRAW
	battle_window_text_jp 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x06 @ B_WIN_VS_OUTCOME_LEFT
	battle_window_text_jp 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x06 @ B_WIN_VS_OUTCOME_RIGHT

	.globl sTextOnWindowsInfo_Arena
sTextOnWindowsInfo_Arena: @ 0x085AC352 (23 x 12-byte JP records)
	battle_window_text_jp 0x00, 0x00, 0xFF, 0x01, 0x00, 0x02, 0x00, 0x00, 0x01, 0x01, 0x0F, 0x06 @ B_WIN_MSG
	battle_window_text_jp 0x00, 0x00, 0xFF, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x0F, 0x06 @ B_WIN_ACTION_PROMPT
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ B_WIN_ACTION_MENU
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ B_WIN_MOVE_NAME_1
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ B_WIN_MOVE_NAME_2
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ B_WIN_MOVE_NAME_3
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ B_WIN_MOVE_NAME_4
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0C, 0x0E, 0x0B @ B_WIN_PP
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ B_WIN_DUMMY
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0C, 0x0E, 0x0B @ B_WIN_PP_REMAINING
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ B_WIN_MOVE_TYPE
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ B_WIN_SWITCH_PROMPT
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ B_WIN_YESNO
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ B_WIN_LEVEL_UP_BOX
	battle_window_text_jp 0x00, 0x00, 0x00, 0x02, 0x20, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02 @ B_WIN_LEVEL_UP_BANNER
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x0E, 0x0F @ ARENA_WIN_PLAYER_NAME
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x08, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ ARENA_WIN_VS
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ ARENA_WIN_OPPONENT_NAME
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x04, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ ARENA_WIN_MIND
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x08, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ ARENA_WIN_SKILL
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x04, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ ARENA_WIN_BODY
	battle_window_text_jp 0x00, 0x00, 0xEE, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D, 0x0E, 0x0F @ ARENA_WIN_JUDGMENT_TITLE
	battle_window_text_jp 0x00, 0x00, 0x11, 0x01, 0x00, 0x02, 0x00, 0x00, 0x01, 0x02, 0x01, 0x03 @ ARENA_WIN_JUDGMENT_TEXT
	.purgem battle_window_text_jp
	.2byte 0x0000 @ alignment before 0x085AC468
	@ pret/pokeemerald-jp direct xref for 0x085AC468: battle_message.s: sub_0814FA04
	.globl gBattleMessageData_085AC468
gBattleMessageData_085AC468: @ 0x085AC468
	@ analyzed canonical ROM range 0x085AC468-0x085AC46F
	@ pointer/nullable table
	@ ANALYSIS: POINTER_TABLE entries=2 size=0x8
	.4byte 0x085AC234
	.4byte 0x085AC354
	@ pret/pokeemerald-jp direct xref for 0x085AC470: battle_message.s: sub_0814FA04
	.globl gBattleMessageData_085AC470
gBattleMessageData_085AC470: @ 0x085AC470
	@ analyzed canonical ROM range 0x085AC470-0x085AC473
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0x08, 0x04, 0x01, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085AC474: cable_car.s: CableCarMainCallback_Setup
	.globl gCableCarData_085AC474
gCableCarData_085AC474: @ 0x085AC474
	@ analyzed canonical ROM range 0x085AC474-0x085AC483
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x10 entries=8
	.2byte 0x11C0, 0x0000, 0x21D1, 0x0000, 0x31E2, 0x0000, 0x01F3, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085AC484: cable_car.s: CableCarMainCallback_Setup
	.globl gCableCarData_085AC484
gCableCarData_085AC484: @ 0x085AC484
	@ confirmed GBA LZ77 stream: compressed=0x158, decompressed=0x168
sLz77Block_085AC484:
	@ analyzed canonical ROM range 0x085AC484-0x085AC5DB
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 1 exact LZ77 asset extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/085AC484.bin.lz"
	@ pret/pokeemerald-jp direct xref for 0x085AC5DC: cable_car.s: CableCarMainCallback_Setup
	.globl sTrees_Tilemap
sTrees_Tilemap: @ 0x085AC5DC
	@ Semantic exact-LZ asset; source: graphics/cable_car/trees.tilemap.u16.
	.incbin "build/graphics/final_remaining/cable_car_trees.bin.lz"
	.if (. - sTrees_Tilemap) != 0x184
	.error "sTrees_Tilemap compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085AC760: cable_car.s: CableCarMainCallback_Setup
	.globl gCableCarData_085AC760
gCableCarData_085AC760: @ 0x085AC760
	@ confirmed GBA LZ77 stream: compressed=0x1C2, decompressed=0x4B0
sLz77Block_085AC760:
	@ analyzed canonical ROM range 0x085AC760-0x085AC923
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 1 exact LZ77 asset extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/assets/lz77_raw/085AC760.bin.lz"
	.byte 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085AC924: cable_car.s: CableCarMainCallback_Setup
	.globl gCableCarData_085AC924
gCableCarData_085AC924: @ 0x085AC924
	@ analyzed canonical ROM range 0x085AC924-0x085AC937
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x14 entries=10
	.2byte 0x3000, 0x3001, 0x3002, 0x3003, 0x3004, 0x3005, 0x3006, 0x3007
	.2byte 0x3008, 0x3009
	@ pret/pokeemerald-jp direct xref for 0x085AC938: cable_car.s: CableCarMainCallback_Setup
	.globl gCableCarData_085AC938
gCableCarData_085AC938: @ 0x085AC938
	@ confirmed GBA LZ77 stream: compressed=0x24, decompressed=0x78
sLz77Block_085AC938:
	@ analyzed canonical ROM range 0x085AC938-0x085AC95B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x24 entries=18
	.2byte 0x7810, 0x0000, 0x0A00, 0x0B30, 0x0C30, 0x0D30, 0x0130, 0x300E
	.2byte 0x300F, 0x301E, 0xF01F, 0xFC03, 0x0300, 0x1BF0, 0x1BF0, 0x03F0
	.2byte 0x1BF0, 0x0390
	@ pret/pokeemerald-jp direct xref for 0x085AC95C: cable_car.s: CableCarMainCallback_Setup
	@ Cable Car compressed sprite sheets
	.globl sCableCarSpriteSheets
sCableCarSpriteSheets: @ 0x085AC95C
	@ analyzed canonical ROM range 0x085AC95C-0x085AC97B
	compressed_sprite_sheet gLz77Asset_08DBC238, 0x800, 1
	compressed_sprite_sheet gLz77Asset_08DBC538, 0x40, 2
	compressed_sprite_sheet gLz77Asset_08DBC568, 0x80, 3
	null_compressed_sprite_sheet
	@ pret/pokeemerald-jp direct xref for 0x085AC97C: cable_car.s: CableCarMainCallback_Setup
	.globl gCableCarData_085AC97C
gCableCarData_085AC97C: @ 0x085AC97C
	@ analyzed canonical ROM range 0x085AC97C-0x085AC9A3
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x28 entries=20
	.2byte 0xA840, 0x08DB, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0300, 0xC000, 0x0800, 0x0000, 0x4300, 0x0000, 0x0800, 0x0000
	.2byte 0x0300, 0x4000, 0x0800, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085AC9A4: cable_car.s: LoadCableCarSprites
	.globl gCableCarData_085AC9A4
gCableCarData_085AC9A4: @ 0x085AC9A4
	@ analyzed canonical ROM range 0x085AC9A4-0x085AC9D3
	@ pointer/nullable table
	.4byte 0x00010001 @ +0x0
	.4byte 0x085AC98C @ +0x4
	.4byte gDummySpriteAnimTable @ +0x8
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x10
	.4byte sub_08150844 @ +0x14
	.4byte 0x00010002 @ +0x18
	.4byte 0x085AC994 @ +0x1C
	.4byte gDummySpriteAnimTable @ +0x20
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x28
	.4byte sub_08150844 @ +0x2C
	@ pret/pokeemerald-jp direct xref for 0x085AC9D4: cable_car.s: LoadCableCarSprites
	.globl gCableCarData_085AC9D4
gCableCarData_085AC9D4: @ 0x085AC9D4
	@ analyzed canonical ROM range 0x085AC9D4-0x085AC9EB
sSpriteTemplate_085AC9D4: @ 0x085AC9D4
	rodata_sprite_template 0x0003, 0x0001, 0x085AC99C, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, nullsub_58
	@ pret/pokeemerald-jp direct xref for 0x085AC9EC: cable_car.s: LoadCableCarSprites
	.globl gCableCarData_085AC9EC
gCableCarData_085AC9EC: @ 0x085AC9EC
	@ analyzed canonical ROM range 0x085AC9EC-0x085AC9ED
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x2 bytes=2
	.byte 0x64, 0x69
	@ pret/pokeemerald-jp direct xref for 0x085AC9EE: cable_car.s: LoadCableCarSprites
	.globl gCableCarData_085AC9EE
gCableCarData_085AC9EE: @ 0x085AC9EE
	@ analyzed canonical ROM range 0x085AC9EE-0x085AC9F1
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0x37, 0x1F, 0x20, 0x62
	@ pret/pokeemerald-jp direct xref for 0x085AC9F2: cable_car.s: LoadCableCarSprites
	.globl gCableCarData_085AC9F2
gCableCarData_085AC9F2: @ 0x085AC9F2
	@ analyzed canonical ROM range 0x085AC9F2-0x085AC9F9
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x8 entries=4
	.2byte 0x0000, 0x0050, 0x00F0, 0x0092
	@ pret/pokeemerald-jp direct xref for 0x085AC9FA: cable_car.s: LoadCableCarSprites
	.globl gCableCarData_085AC9FA
gCableCarData_085AC9FA: @ 0x085AC9FA
	@ analyzed canonical ROM range 0x085AC9FA-0x085AC9FF
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x6 bytes=6
	.byte 0x00, 0x3C, 0x78, 0xAA, 0x00, 0x00
	.globl gBattlePointerTable_Rom_5ACA00
gBattlePointerTable_Rom_5ACA00: @ 0x085ACA00
	.4byte sub_08150A44
	.4byte sub_08150AD0
	@ pret/pokeemerald-jp direct xref for 0x085ACA08: save.s: UpdateSaveAddresses
	.globl gSaveData_085ACA08
gSaveData_085ACA08: @ 0x085ACA08
	@ analyzed canonical ROM range 0x085ACA08-0x085ACA3F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x38 entries=28
	.2byte 0x0000, 0x0F2C, 0x0000, 0x0F80, 0x0F80, 0x0F80, 0x1F00, 0x0F80
	.2byte 0x2E80, 0x0F08, 0x0000, 0x0F80, 0x0F80, 0x0F80, 0x1F00, 0x0F80
	.2byte 0x2E80, 0x0F80, 0x3E00, 0x0F80, 0x4D80, 0x0F80, 0x5D00, 0x0F80
	.2byte 0x6C80, 0x0F80, 0x7C00, 0x07D0
	@ pret/pokeemerald-jp direct xref for 0x085ACA40: field_effect_helpers.s: LoadObjectReflectionPalette
	.globl gFieldEffectHelpersData_085ACA40
gFieldEffectHelpersData_085ACA40: @ 0x085ACA40
	@ analyzed canonical ROM range 0x085ACA40-0x085ACA45
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x6 bytes=6
	.byte 0x0C, 0x00, 0x1C, 0x00, 0x2C, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085ACA46: field_effect_helpers.s: FldEff_Shadow
	.globl gFieldEffectHelpersData_085ACA46
gFieldEffectHelpersData_085ACA46: @ 0x085ACA46
	@ analyzed canonical ROM range 0x085ACA46-0x085ACA49
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0x00, 0x01, 0x02, 0x03
	@ pret/pokeemerald-jp direct xref for 0x085ACA4A: field_effect_helpers.s: FldEff_Shadow
	.globl gFieldEffectHelpersData_085ACA4A
gFieldEffectHelpersData_085ACA4A: @ 0x085ACA4A
	@ analyzed canonical ROM range 0x085ACA4A-0x085ACA53
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xA entries=5
	.2byte 0x0004, 0x0004, 0x0004, 0x0010, 0x0000
	.globl gBattleU32Table_Rom_5ACA54
gBattleU32Table_Rom_5ACA54: @ 0x085ACA54
	.4byte FadeFootprintsTireTracks_Step0
	.4byte FadeFootprintsTireTracks_Step1
	.globl gBattleU32Table_Rom_5ACA5C
gBattleU32Table_Rom_5ACA5C: @ 0x085ACA5C
	.4byte UpdateAshFieldEffect_Step0
	.4byte UpdateAshFieldEffect_Step1
	.4byte UpdateAshFieldEffect_Step2
	@ pret/pokeemerald-jp direct xref for 0x085ACA68: field_effect_helpers.s: SynchroniseSurfAnim
	.globl gFieldEffectHelpersData_085ACA68
gFieldEffectHelpersData_085ACA68: @ 0x085ACA68
	@ analyzed canonical ROM range 0x085ACA68-0x085ACA71
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xA entries=5
	.2byte 0x0000, 0x0201, 0x0003, 0x0100, 0x0001
	@ pret/pokeemerald-jp direct xref for 0x085ACA72: field_effect_helpers.s: CreateBobbingEffect
	.globl gFieldEffectHelpersData_085ACA72
gFieldEffectHelpersData_085ACA72: @ 0x085ACA72
	@ analyzed canonical ROM range 0x085ACA72-0x085ACB07
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x96 entries=75
	.2byte 0x0003, 0x0007, 0x0201, 0x0202, 0x0202, 0x0202, 0x0202, 0x0102
	.2byte 0x0202, 0x0201, 0x0102, 0x0202, 0x0201, 0x0101, 0x0102, 0x0201
	.2byte 0x0101, 0x0102, 0x0201, 0x0101, 0x0101, 0x0101, 0x0101, 0x0101
	.2byte 0x0101, 0x0101, 0x0100, 0x0101, 0x0100, 0x0001, 0x0001, 0x0001
	.2byte 0x0001, 0x0000, 0x0100, 0x0000, 0x0000, 0x0000, 0x0000, 0x0001
	.2byte 0x0100, 0x0000, 0x0001, 0x0101, 0x0100, 0x0001, 0x0101, 0x0100
	.2byte 0x0001, 0x0101, 0x0000, 0x0001, 0x0100, 0x0000, 0x0001, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x00FF
	.2byte 0xFF00, 0x0000, 0x00FF, 0xFFFF, 0xFF00, 0x00FF, 0xFFFF, 0xFFFF
	.2byte 0xFFFF, 0xFEFF, 0x0000
	.globl gBattleU32Table_Rom_5ACB08
gBattleU32Table_Rom_5ACB08: @ 0x085ACB08
	.4byte ContestAICmd_score
	.4byte ContestAICmd_get_turn
	.4byte ContestAICmd_if_turn_less_than
	.4byte ContestAICmd_if_turn_more_than
	.4byte ContestAICmd_if_turn_eq
	.4byte ContestAICmd_if_turn_not_eq
	.4byte ContestAICmd_get_excitement
	.4byte ContestAICmd_if_excitement_less_than
	.4byte ContestAICmd_if_excitement_more_than
	.4byte ContestAICmd_if_excitement_eq
	.4byte ContestAICmd_if_excitement_not_eq
	.4byte ContestAICmd_get_user_order
	.4byte ContestAICmd_if_user_order_less_than
	.4byte ContestAICmd_if_user_order_more_than
	.4byte ContestAICmd_if_user_order_eq
	.4byte ContestAICmd_if_user_order_not_eq
	.4byte ContestAICmd_get_user_condition
	.4byte ContestAICmd_if_user_condition_less_than
	.4byte ContestAICmd_if_user_condition_more_than
	.4byte ContestAICmd_if_user_condition_eq
	.4byte ContestAICmd_if_user_condition_not_eq
	.4byte ContestAICmd_unk_15
	.4byte ContestAICmd_unk_1B
	.4byte ContestAICmd_unk_17
	.4byte ContestAICmd_unk_18
	.4byte ContestAICmd_unk_1E
	.4byte ContestAICmd_unk_1A
	.4byte ContestAICmd_unk_16
	.4byte ContestAICmd_unk_1C
	.4byte ContestAICmd_unk_1D
	.4byte ContestAICmd_unk_19
	.4byte ContestAICmd_get_contest_type
	.4byte ContestAICmd_if_contest_type_eq
	.4byte ContestAICmd_if_contest_type_not_eq
	.4byte ContestAICmd_get_move_excitement
	.4byte ContestAICmd_if_move_excitement_less_than
	.4byte ContestAICmd_if_move_excitement_greater_than
	.4byte ContestAICmd_if_move_excitement_eq
	.4byte ContestAICmd_if_move_excitement_not_eq
	.4byte ContestAICmd_get_move_effect
	.4byte ContestAICmd_if_move_effect_eq
	.4byte ContestAICmd_if_move_effect_not_eq
	.4byte ContestAICmd_get_move_effect_type
	.4byte ContestAICmd_if_move_effect_type_eq
	.4byte ContestAICmd_if_move_effect_type_not_eq
	.4byte ContestAICmd_check_most_appealing_move
	.4byte ContestAICmd_if_most_appealing_move
	.4byte ContestAICmd_unk_2F
	.4byte ContestAICmd_unk_30
	.4byte ContestAICmd_unk_31
	.4byte ContestAICmd_unk_32
	.4byte ContestAICmd_if_used_combo_starter_more_than
	.4byte ContestAICmd_if_used_combo_starter_eq
	.4byte ContestAICmd_unk_35
	.4byte ContestAICmd_unk_36
	.4byte ContestAICmd_unk_37
	.4byte ContestAICmd_unk_33
	.4byte ContestAICmd_unk_34
	.4byte ContestAICmd_unk_3A
	.4byte ContestAICmd_get_move_used_count
	.4byte ContestAICmd_if_most_used_count_less_than
	.4byte ContestAICmd_if_most_used_count_more_than
	.4byte ContestAICmd_if_most_used_count_eq
	.4byte ContestAICmd_if_most_used_count_not_eq
	.4byte ContestAICmd_check_combo_starter
	.4byte ContestAICmd_if_combo_starter
	.4byte ContestAICmd_if_not_combo_starter
	.4byte ContestAICmd_check_combo_finisher
	.4byte ContestAICmd_if_combo_finisher
	.4byte ContestAICmd_if_not_combo_finisher
	.4byte ContestAICmd_check_would_finish_combo
	.4byte ContestAICmd_if_would_finish_combo
	.4byte ContestAICmd_if_would_not_finish_combo
	.4byte ContestAICmd_get_condition
	.4byte ContestAICmd_if_condition_less_than
	.4byte ContestAICmd_if_condition_more_than
	.4byte ContestAICmd_if_condition_eq
	.4byte ContestAICmd_if_condition_not_eq
	.4byte ContestAICmd_get_used_combo_starter
	.4byte ContestAICmd_if_used_combo_starter_less_than
	.4byte ContestAICmd_unk_38
	.4byte ContestAICmd_unk_39
	.4byte ContestAICmd_if_used_combo_starter_not_eq
	.4byte ContestAICmd_check_can_participate
	.4byte ContestAICmd_if_can_participate
	.4byte ContestAICmd_if_cannot_participate
	.4byte ContestAICmd_get_val_812A188
	.4byte ContestAICmd_unk_57
	.4byte ContestAICmd_contest_58
	.4byte ContestAICmd_unk_59
	.4byte ContestAICmd_unk_5A
	.4byte ContestAICmd_unk_5B
	.4byte ContestAICmd_unk_5C
	.4byte ContestAICmd_unk_5D
	.4byte ContestAICmd_unk_5E
	.4byte ContestAICmd_unk_5F
	.4byte ContestAICmd_unk_60
	.4byte ContestAICmd_unk_61
	.4byte ContestAICmd_unk_62
	.4byte ContestAICmd_unk_63
	.4byte ContestAICmd_unk_64
	.4byte ContestAICmd_unk_65
	.4byte ContestAICmd_unk_66
	.4byte ContestAICmd_unk_67
	.4byte ContestAICmd_unk_68
	.4byte ContestAICmd_unk_69
	.4byte ContestAICmd_unk_6A
	.4byte ContestAICmd_unk_6B
	.4byte ContestAICmd_unk_6C
	.4byte ContestAICmd_unk_6D
	.4byte ContestAICmd_unk_6E
	.4byte ContestAICmd_unk_6F
	.4byte ContestAICmd_unk_70
	.4byte ContestAICmd_unk_71
	.4byte ContestAICmd_unk_72
	.4byte ContestAICmd_unk_74
	.4byte ContestAICmd_unk_73
	.4byte ContestAICmd_unk_75
	.4byte ContestAICmd_unk_76
	.4byte ContestAICmd_unk_77
	.4byte ContestAICmd_unk_78
	.4byte ContestAICmd_unk_79
	.4byte ContestAICmd_unk_7A
	.4byte ContestAICmd_unk_7B
	.4byte ContestAICmd_unk_7C
	.4byte ContestAICmd_if_random
	.4byte ContestAICmd_unk_7E
	.4byte ContestAICmd_jump
	.4byte ContestAICmd_call
	.4byte ContestAICmd_end
	.4byte ContestAICmd_check_user_has_exciting_move
	.4byte ContestAICmd_if_user_has_exciting_move
	.4byte ContestAICmd_if_user_doesnt_have_exciting_move
	.4byte ContestAICmd_unk_85
	.4byte ContestAICmd_unk_86
	.4byte ContestAICmd_if_effect_in_user_moveset
	@ pret/pokeemerald-jp direct xref for 0x085ACD28: battle_controller_safari.s: SafariBufferRunCommand
	.globl gBattleControllerSafariData_085ACD28
gBattleControllerSafariData_085ACD28: @ 0x085ACD28
	@ confirmed contiguous ROM pointer table: 57 entries from this address
sPointerTable_085ACD28:
	@ analyzed canonical ROM range 0x085ACD28-0x085AD0A7
	@ semantic recovery: rodata; byte-verified against linked ROM
FunctionPointerTable_JP_085ACD28: @ 0x085ACD28
	@ proven function-pointer table
	.4byte SafariHandleGetMonData
	.4byte SafariHandleGetRawMonData
	.4byte SafariHandleSetMonData
	.4byte SafariHandleSetRawMonData
	.4byte SafariHandleLoadMonSprite
	.4byte SafariHandleSwitchInAnim
	.4byte SafariHandleReturnMonToBall
	.4byte SafariHandleDrawTrainerPic
	.4byte SafariHandleTrainerSlide
	.4byte SafariHandleTrainerSlideBack
	.4byte SafariHandleFaintAnimation
	.4byte SafariHandlePaletteFade
	.4byte sub_0815984C
	.4byte sub_081598A0
	.4byte SafariHandlePause
	.4byte SafariHandleMoveAnimation
	.4byte SafariHandlePrintString
	.4byte sub_0815996C
	.4byte SafariHandleChooseAction
	.4byte SafariHandleUnknownYesNoBox
	.4byte SafariHandleChooseMove
	.4byte SafariHandleChooseItem
	.4byte SafariHandleChoosePokemon
	.4byte SafariHandleCmd23
	.4byte SafariHandleHealthBarUpdate
	.4byte SafariHandleExpUpdate
	.4byte SafariHandleStatusIconUpdate
	.4byte SafariHandleStatusAnimation
	.4byte SafariHandleStatusXor
	.4byte SafariHandleDataTransfer
	.4byte SafariHandleDMA3Transfer
	.4byte SafariHandlePlayBGM
	.4byte SafariHandleCmd32
	.4byte SafariHandleTwoReturnValues
	.4byte SafariHandleChosenMonReturnValue
	.4byte SafariHandleOneReturnValue
	.4byte SafariHandleOneReturnValue_Duplicate
	.4byte SafariHandleCmd37
	.4byte SafariHandleCmd38
	.4byte SafariHandleCmd39
	.4byte SafariHandleCmd40
	.4byte SafariHandleHitAnimation
	.4byte SafariHandleCmd42
	.4byte SafariHandlePlaySE
	.4byte SafariHandlePlayFanfareOrBGM
	.4byte SafariHandleFaintingCry
	.4byte SafariHandleIntroSlide
	.4byte SafariHandleIntroTrainerBallThrow
	.4byte SafariHandleDrawPartyStatusSummary
	.4byte SafariHandleHidePartyStatusSummary
	.4byte SafariHandleEndBounceEffect
	.4byte SafariHandleSpriteInvisibility
	.4byte SafariHandleBattleAnimation
	.4byte SafariHandleLinkStandbyMsg
	.4byte SafariHandleResetActionMoveSelection
	.4byte SafariHandleCmd55
	.4byte SafariCmdEnd
	.byte 0x00, 0x00, 0x04, 0x00, 0x10, 0x00, 0x04, 0x00, 0x20, 0x00, 0x04, 0x00, 0x30, 0x00, 0x04, 0x00
	.byte 0x40, 0x00, 0x04, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x0C, 0xCE, 0x5A, 0x08, 0x99, 0x27, 0x99, 0x27
	.byte 0x40, 0xD1, 0x4F, 0x08, 0x24, 0xCE, 0x5A, 0x08, 0x00, 0x00, 0x00, 0x00, 0x10, 0xF3, 0x2B, 0x08
	.byte 0x91, 0x70, 0x0A, 0x08, 0x20, 0x27, 0x20, 0x27, 0x40, 0xD0, 0x4F, 0x08, 0x04, 0xF3, 0x2B, 0x08
	.byte 0x00, 0x00, 0x00, 0x00, 0x10, 0xF3, 0x2B, 0x08, 0x11, 0xA0, 0x15, 0x08, 0x21, 0x27, 0x21, 0x27
	.byte 0x10, 0xD0, 0x4F, 0x08, 0x04, 0xF3, 0x2B, 0x08, 0x00, 0x00, 0x00, 0x00, 0x10, 0xF3, 0x2B, 0x08
	.byte 0x75, 0x71, 0x0A, 0x08, 0x00, 0x00, 0x28, 0x00, 0x10, 0x00, 0x08, 0x00, 0x20, 0x00, 0x28, 0x00
	.byte 0xFF, 0xFF, 0x00, 0x00, 0x70, 0xCE, 0x5A, 0x08, 0xCE, 0x27, 0xCE, 0x27, 0x20, 0xD0, 0x4F, 0x08
	.byte 0x80, 0xCE, 0x5A, 0x08, 0x00, 0x00, 0x00, 0x00, 0x10, 0xF3, 0x2B, 0x08, 0x91, 0x70, 0x0A, 0x08
	.byte 0xCF, 0x27, 0xCF, 0x27, 0x48, 0xD1, 0x4F, 0x08, 0x04, 0xF3, 0x2B, 0x08, 0x00, 0x00, 0x00, 0x00
	.byte 0x10, 0xF3, 0x2B, 0x08, 0xED, 0xA0, 0x15, 0x08, 0xCD, 0x27, 0xCD, 0x27, 0x80, 0xD0, 0x4F, 0x08
	.byte 0x04, 0xF3, 0x2B, 0x08, 0x00, 0x00, 0x00, 0x00, 0x10, 0xF3, 0x2B, 0x08, 0x91, 0xA1, 0x15, 0x08
	.byte 0x80, 0x01, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0x18, 0x00, 0x00, 0x05, 0x00, 0x00
	.byte 0x18, 0x00, 0xE0, 0xFF, 0x00, 0x05, 0x00, 0x00, 0xFE, 0x7F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x30, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x20, 0x00, 0x00, 0x06, 0x00, 0x00
	.byte 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xCE, 0x5A, 0x08, 0xEC, 0xCE, 0x5A, 0x08
	.byte 0xCB, 0x27, 0xCB, 0x27, 0x08, 0xD2, 0x4F, 0x08, 0x04, 0xF3, 0x2B, 0x08, 0x00, 0x00, 0x00, 0x00
	.byte 0x04, 0xCF, 0x5A, 0x08, 0x2D, 0xA2, 0x15, 0x08, 0xA8, 0x27, 0xA8, 0x27, 0x18, 0xD0, 0x4F, 0x08
	.byte 0x04, 0xF3, 0x2B, 0x08, 0x00, 0x00, 0x00, 0x00, 0x10, 0xF3, 0x2B, 0x08, 0x01, 0xA6, 0x15, 0x08
	.byte 0x00, 0x00, 0x03, 0x00, 0x10, 0x00, 0x03, 0x00, 0x20, 0x00, 0x03, 0x00, 0x30, 0x00, 0x03, 0x00
	.byte 0x40, 0x00, 0x03, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x3C, 0xCF, 0x5A, 0x08, 0x2B, 0x27, 0x2B, 0x27
	.byte 0x20, 0xD0, 0x4F, 0x08, 0x54, 0xCF, 0x5A, 0x08, 0x00, 0x00, 0x00, 0x00, 0x10, 0xF3, 0x2B, 0x08
	.byte 0xED, 0xA6, 0x15, 0x08, 0x00, 0x00, 0x03, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x70, 0xCF, 0x5A, 0x08
	.byte 0xF9, 0xFF, 0xF9, 0xFF, 0xFD, 0x10, 0x00, 0x00, 0x07, 0x00, 0x07, 0x00, 0x03, 0x10, 0x00, 0x00
	.byte 0xFE, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0xCF, 0x5A, 0x08, 0xF4, 0x27, 0xF4, 0x27
	.byte 0x80, 0xD0, 0x4F, 0x08, 0x78, 0xCF, 0x5A, 0x08, 0x00, 0x00, 0x00, 0x00, 0x94, 0xCF, 0x5A, 0x08
	.byte 0x29, 0xA7, 0x15, 0x08, 0x00, 0x00, 0x08, 0x00, 0x10, 0x00, 0x10, 0x00, 0x20, 0x00, 0x04, 0x00
	.byte 0x30, 0x00, 0x04, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xB0, 0xCF, 0x5A, 0x08, 0x00, 0x02, 0x00, 0x02
	.byte 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0xE0, 0xFF, 0x00, 0x08, 0x00, 0x00, 0xFF, 0x7F, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0xC8, 0xCF, 0x5A, 0x08, 0xD0, 0x27, 0xD0, 0x27, 0xE0, 0xD0, 0x4F, 0x08
	.byte 0xC4, 0xCF, 0x5A, 0x08, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xCF, 0x5A, 0x08, 0xE9, 0xA7, 0x15, 0x08
	.byte 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00
	.byte 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x01, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00
	.byte 0xF0, 0xFF, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0xFC, 0xCF, 0x5A, 0x08, 0x14, 0xD0, 0x5A, 0x08, 0xF3, 0x27, 0xF3, 0x27, 0xE8, 0xD0, 0x4F, 0x08
	.byte 0x04, 0xF3, 0x2B, 0x08, 0x00, 0x00, 0x00, 0x00, 0x2C, 0xD0, 0x5A, 0x08, 0x71, 0xA8, 0x15, 0x08
	.byte 0x07, 0x28, 0x07, 0x28, 0x20, 0xD0, 0x4F, 0x08, 0x04, 0xF3, 0x2B, 0x08, 0x00, 0x00, 0x00, 0x00
	.byte 0x10, 0xF3, 0x2B, 0x08, 0xE1, 0xA9, 0x15, 0x08, 0x07, 0x28, 0x07, 0x28, 0x20, 0xD0, 0x4F, 0x08
	.byte 0x04, 0xF3, 0x2B, 0x08, 0x00, 0x00, 0x00, 0x00, 0x10, 0xF3, 0x2B, 0x08, 0x0D, 0xAB, 0x15, 0x08
	.byte 0x00, 0x00, 0x02, 0x00, 0x08, 0x00, 0x02, 0x00, 0x10, 0x00, 0x02, 0x00, 0xFE, 0xFF, 0x00, 0x00
	.byte 0x7C, 0xD0, 0x5A, 0x08, 0xF5, 0x27, 0xF5, 0x27, 0x40, 0xD0, 0x4F, 0x08, 0x8C, 0xD0, 0x5A, 0x08
	.byte 0x00, 0x00, 0x00, 0x00, 0x10, 0xF3, 0x2B, 0x08, 0x0D, 0xAC, 0x15, 0x08
	@ Torment attacker deformation used directly by the visual task.
	.globl gTormentAttackerAffineAnimCmds
gTormentAttackerAffineAnimCmds: @ 0x085AD0A8
	.2byte 0xFFF4, 0x0008, 0x0400, 0x0000
	.2byte 0x0014, 0xFFEC, 0x0400, 0x0000
	.2byte 0xFFF8, 0x000C, 0x0400, 0x0000
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000

	.globl gTriAttackTriangleAnimCmds
gTriAttackTriangleAnimCmds: @ 0x085AD0C8
	.2byte 0x0000, 0x0008
	.2byte 0xFFFF, 0x0000

	.globl gTriAttackTriangleAnimTable
gTriAttackTriangleAnimTable: @ 0x085AD0D0
	.4byte gTriAttackTriangleAnimCmds

	.globl gTriAttackTriangleAffineAnimCmds
gTriAttackTriangleAffineAnimCmds: @ 0x085AD0D4
	.2byte 0x0000, 0x0000, 0x2805, 0x0000
	.2byte 0x0000, 0x0000, 0x0A0A, 0x0000
	.2byte 0x0000, 0x0000, 0x0A0F, 0x0000
	.2byte 0x0000, 0x0000, 0x2814, 0x0000
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000

	.globl gTriAttackTriangleAffineAnimTable
gTriAttackTriangleAffineAnimTable: @ 0x085AD0FC
	.4byte gTriAttackTriangleAffineAnimCmds

	.globl gTriAttackTriangleSpriteTemplate
gTriAttackTriangleSpriteTemplate: @ 0x085AD100
	.2byte 0x27F6, 0x27F6
	.4byte gOamData_AffineDouble_ObjNormal_64x64
	.4byte gTriAttackTriangleAnimTable
	.4byte 0
	.4byte gTriAttackTriangleAffineAnimTable
	.4byte sub_0815B1B8
	.globl gEclipsingOrbAnimCmds
gEclipsingOrbAnimCmds: @ 0x085AD118
	.2byte 0x0000, 0x0003
	.2byte 0x0010, 0x0003
	.2byte 0x0020, 0x0003
	.2byte 0x0030, 0x0003
	.2byte 0x0020, 0x0043
	.2byte 0x0010, 0x0043
	.2byte 0x0000, 0x0043
	.2byte 0xFFFD, 0x0001
	.2byte 0xFFFF, 0x0000

	.globl gEclipsingOrbAnimTable
gEclipsingOrbAnimTable: @ 0x085AD13C
	.4byte gEclipsingOrbAnimCmds

	.globl gEclipsingOrbSpriteTemplate
gEclipsingOrbSpriteTemplate: @ 0x085AD140
	.2byte 0x27FA, 0x27FA
	.4byte gOamData_AffineOff_ObjNormal_32x32
	.4byte gEclipsingOrbAnimTable
	.4byte 0
	.4byte gDummySpriteAffineAnimTable
	.4byte AnimSpriteOnMonPos
	@ Deformation run by AnimTask_DefenseCurlDeformMon.
	.globl DefenseCurlDeformMonAffineAnimCmds
DefenseCurlDeformMonAffineAnimCmds: @ 0x085AD158
	.2byte 0xFFF4, 0x0014, 0x0800, 0x0000
	.2byte 0x000C, 0xFFEC, 0x0800, 0x0000
	.2byte 0x7FFD, 0x0002, 0x0000, 0x0000
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000

	.globl gBatonPassPokeballSpriteTemplate
gBatonPassPokeballSpriteTemplate: @ 0x085AD178
	.2byte 0x27F2, 0x27F2
	.4byte gOamData_AffineOff_ObjNormal_16x16
	.4byte gDummySpriteAnimTable
	.4byte 0
	.4byte gDummySpriteAffineAnimTable
	.4byte sub_0815B2D0
	@ pret/pokeemerald-jp direct xref for 0x085AD190: battle_anim_special.s: sub_08172DD0
	.globl gBattleAnimSpecialData_085AD190
gBattleAnimSpecialData_085AD190:
	@ analyzed canonical ROM range 0x085AD190-0x085AD1A7
	.globl sSpriteTemplate_085AD190
sSpriteTemplate_085AD190: @ 0x085AD190
	rodata_sprite_template 0x27F9, 0x27F9, gOamData_AffineOff_ObjNormal_16x16, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_0815B3D8
	@ pret/pokeemerald-jp direct xref for 0x085AD1A8: battle_anim_effects_3.s: AnimMeteorMashStarStep, sub_0815B410; battle_anim_special.s: sub_08172DD0
	.globl sSpriteTemplate_085AD1A8
	@ analyzed canonical ROM range 0x085AD1A8-0x085AD1BF
sSpriteTemplate_085AD1A8: @ 0x085AD1A8
	rodata_sprite_template 0x27F9, 0x27F9, gOamData_AffineOff_ObjNormal_8x8, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, AnimMiniTwinklingStar
	@ pret/pokeemerald-jp direct xref for 0x085AD1C0: battle_anim_effects_3.s: sub_0815B598
	.globl gBattleAnimEffects3Data_085AD1C0
gBattleAnimEffects3Data_085AD1C0: @ 0x085AD1C0
	@ analyzed canonical ROM range 0x085AD1C0-0x085AD1E7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x28 entries=20
	.2byte 0x0008, 0xFFF8, 0x0C00, 0x0000, 0xFFF0, 0x0010, 0x0C00, 0x0000
	.2byte 0x0008, 0xFFF8, 0x0C00, 0x0000, 0x7FFD, 0x0001, 0x0000, 0x0000
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000
	.globl gSpitUpDeformMonAffineAnimCmds
gSpitUpDeformMonAffineAnimCmds: @ 0x085AD1E8
	.2byte 0x0000, 0x0006, 0x1400, 0x0000
	.2byte 0x0000, 0x0000, 0x1400, 0x0000
	.2byte 0x0000, 0xFFEE, 0x0600, 0x0000
	.2byte 0xFFEE, 0xFFEE, 0x0300, 0x0000
	.2byte 0x0000, 0x0000, 0x0F00, 0x0000
	.2byte 0x0004, 0x0004, 0x0D00, 0x0000
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000

	.globl gSwallowBlueOrbSpriteTemplate
gSwallowBlueOrbSpriteTemplate: @ 0x085AD220
	.2byte 0x27FC, 0x27FC
	.4byte gOamData_AffineOff_ObjNormal_8x8
	.4byte gDummySpriteAnimTable
	.4byte 0
	.4byte gDummySpriteAffineAnimTable
	.4byte sub_0815B648
	@ pret/pokeemerald-jp direct xref for 0x085AD238: battle_anim_effects_3.s: sub_0815B6B4
	.globl gBattleAnimEffects3Data_085AD238
gBattleAnimEffects3Data_085AD238: @ 0x085AD238
	@ analyzed canonical ROM range 0x085AD238-0x085AD267
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x30 entries=24
	.2byte 0x0000, 0x0006, 0x1400, 0x0000, 0x0000, 0x0000, 0x1400, 0x0000
	.2byte 0x0007, 0xFFE2, 0x0600, 0x0000, 0x0000, 0x0000, 0x1400, 0x0000
	.2byte 0xFFFE, 0x0003, 0x1400, 0x0000, 0x7FFF, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085AD268: battle_anim_effects_3.s: sub_0815BAC0
	.globl gBattleAnimEffects3Data_085AD268
gBattleAnimEffects3Data_085AD268: @ 0x085AD268
	@ analyzed canonical ROM range 0x085AD268-0x085AD293
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x2C entries=22
	.2byte 0x18E8, 0x00FC, 0x0000, 0x0006, 0x0004, 0x0006, 0xFFFE, 0x0000
	.2byte 0x0008, 0x0006, 0xFFFF, 0x0000, 0x000C, 0x0006, 0xFFFF, 0x0000
	.2byte 0xD26C, 0x085A, 0xD278, 0x085A, 0xD280, 0x085A
	@ pret/pokeemerald-jp direct xref for 0x085AD294: battle_anim_effects_3.s: sub_0815BD40
	.globl gBattleAnimEffects3Data_085AD294
gBattleAnimEffects3Data_085AD294:
	@ analyzed canonical ROM range 0x085AD294-0x085AD2AB
	.globl sSpriteTemplate_085AD294
sSpriteTemplate_085AD294: @ 0x085AD294
	rodata_sprite_template 0x2801, 0x2801, gOamData_AffineOff_ObjNormal_16x16, 0x085AD288, 0, gDummySpriteAffineAnimTable, sub_0815BD40
	@ pret/pokeemerald-jp direct xref for 0x085AD2AC: battle_anim_effects_3.s: sub_0815BFE0
	.globl gBattleAnimEffects3Data_085AD2AC
gBattleAnimEffects3Data_085AD2AC: @ 0x085AD2AC
	@ analyzed canonical ROM range 0x085AD2AC-0x085AD2AF
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0x78, 0x50, 0x28, 0x00
	.globl gBattleU32Table_Rom_5AD2B0
gBattleU32Table_Rom_5AD2B0: @ 0x085AD2B0
	@ Resolved pointer table; original ROM range 0x5AD2B0..0x5AD2B7.
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte ABILITY_RUN_AWAY
	.globl gStrongFrustrationAffineAnimCmds
gStrongFrustrationAffineAnimCmds: @ 0x085AD2B8
	.2byte 0x0000, 0xFFF1, 0x0700, 0x0000
	.2byte 0x0000, 0x000F, 0x0700, 0x0000
	.2byte 0x7FFD, 0x0002, 0x0000, 0x0000
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000

	.globl gWeakFrustrationAngerMarkSpriteTemplate
gWeakFrustrationAngerMarkSpriteTemplate: @ 0x085AD2D8
	.2byte 0x2767, 0x2767
	.4byte gOamData_AffineOff_ObjNormal_16x16
	.4byte gDummySpriteAnimTable
	.4byte 0
	.4byte gDummySpriteAffineAnimTable
	.4byte AnimWeakFrustrationAngerMark
	.globl gSweetScentPetalAnimCmds1
gSweetScentPetalAnimCmds1: @ 0x085AD2F0
	.2byte 0x0000, 0x0008, 0x0001, 0x0008
	.2byte 0x0002, 0x0008, 0x0003, 0x0008
	.2byte 0x0003, 0x0088, 0x0002, 0x0088
	.2byte 0x0000, 0x0088, 0x0001, 0x0088
	.2byte 0xFFFE, 0x0000

	.globl gSweetScentPetalAnimCmds2
gSweetScentPetalAnimCmds2: @ 0x085AD314
	.2byte 0x0000, 0x0048, 0x0001, 0x0048
	.2byte 0x0002, 0x0048, 0x0003, 0x0048
	.2byte 0x0003, 0x00C8, 0x0002, 0x00C8
	.2byte 0x0000, 0x00C8, 0x0001, 0x00C8
	.2byte 0xFFFE, 0x0000

	.globl gSweetScentPetalAnimCmds3
gSweetScentPetalAnimCmds3: @ 0x085AD338
	.2byte 0x0000, 0x0008
	.2byte 0xFFFF, 0x0000

	.globl gSweetScentPetalAnimCmdTable
gSweetScentPetalAnimCmdTable: @ 0x085AD340
	.4byte gSweetScentPetalAnimCmds1
	.4byte gSweetScentPetalAnimCmds2
	.4byte gSweetScentPetalAnimCmds3

	.globl gSweetScentPetalSpriteTemplate
gSweetScentPetalSpriteTemplate: @ 0x085AD34C
	.2byte 0x27FE, 0x27FE
	.4byte gOamData_AffineOff_ObjNormal_8x8
	.4byte gSweetScentPetalAnimCmdTable
	.4byte 0
	.4byte gDummySpriteAffineAnimTable
	.4byte AnimSweetScentPetal
	@ Unused 16-color palette retained in the original layout immediately
	@ before the Pain Split animation data.
	.globl gPainSplitUnusedPalette
gPainSplitUnusedPalette: @ 0x085AD364
	.2byte 0x180C, 0x1610, 0x1313, 0x1015
	.2byte 0x0C17, 0x0716, 0x0413, 0x0110
	.2byte 0x000B, 0x0106, 0x0404, 0x0701
	.2byte 0x0C00, 0x1102, 0x1304, 0x1608

	.globl gPainSplitAnimCmds
gPainSplitAnimCmds: @ 0x085AD384
	.2byte 0x0000, 0x0005
	.2byte 0x0004, 0x0009
	.2byte 0x0008, 0x0005
	.2byte 0xFFFF, 0x0000

	.globl gPainSplitAnimCmdTable
gPainSplitAnimCmdTable: @ 0x085AD394
	.4byte gPainSplitAnimCmds

	.globl gPainSplitProjectileSpriteTemplate
gPainSplitProjectileSpriteTemplate: @ 0x085AD398
	.2byte 0x27FF, 0x27FF
	.4byte gOamData_AffineOff_ObjNormal_16x16
	.4byte gPainSplitAnimCmdTable
	.4byte 0
	.4byte gDummySpriteAffineAnimTable
	.4byte AnimPainSplitProjectile
	@ struct SpriteTemplate gFlatterConfettiSpriteTemplate (24 bytes total).
	.globl gFlatterConfettiSpriteTemplate
gFlatterConfettiSpriteTemplate:
	.2byte 0x2800, 0x2800 @ +0x0
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085AD3B4 size=0x4 source=v54_multi_pointer
	.4byte gOamData_AffineOff_ObjNormal_8x8
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085AD3B8 size=0x4 source=v54_multi_pointer
	.4byte gDummySpriteAnimTable
	.4byte 0 @ images = NULL
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085AD3C0 size=0x4 source=v54_multi_pointer
	.4byte gDummySpriteAffineAnimTable
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085AD3C4 size=0x4 source=v54_multi_pointer
	.4byte AnimFlatterConfetti
	@ struct SpriteTemplate gFlatterSpotlightSpriteTemplate (24 bytes total).
	.globl gFlatterSpotlightSpriteTemplate
gFlatterSpotlightSpriteTemplate:
	.2byte 0x27F3, 0x27F3 @ +0x0
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085AD3CC size=0x4 source=v54_multi_pointer
	.4byte gOamData_AffineDouble_ObjNormal_64x64
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085AD3D0 size=0x4 source=v54_multi_pointer
	.4byte gDummySpriteAnimTable
	.4byte 0 @ images = NULL
	.4byte 0x085AD02C @ affineAnims; JP-local numeric pointer preserved
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085AD3DC size=0x4 source=v54_multi_pointer
	.4byte AnimFlatterSpotlight
	@ struct SpriteTemplate gReversalOrbSpriteTemplate (24 bytes total).
	.globl gReversalOrbSpriteTemplate
gReversalOrbSpriteTemplate:
	.2byte 0x27FC, 0x27FC @ +0x0
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085AD3E4 size=0x4 source=v54_multi_pointer
	.4byte gOamData_AffineOff_ObjNormal_8x8
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085AD3E8 size=0x4 source=v54_multi_pointer
	.4byte gDummySpriteAnimTable
	.4byte 0 @ images = NULL
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085AD3F0 size=0x4 source=v54_multi_pointer
	.4byte gDummySpriteAffineAnimTable
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085AD3F4 size=0x4 source=v54_multi_pointer
	.4byte AnimReversalOrb
	.globl gDeepInhaleAffineAnimCmds
gDeepInhaleAffineAnimCmds: @ 0x085AD3F8
	.2byte 0x0010, 0x0000, 0x0400, 0x0000
	.2byte 0x0000, 0xFFFD, 0x1000, 0x0000
	.2byte 0x0004, 0x0000, 0x0400, 0x0000
	.2byte 0x0000, 0x0000, 0x1800, 0x0000
	.2byte 0xFFFB, 0x0003, 0x1000, 0x0000
	.2byte 0x7FFF, 0x0000, 0x0000, 0x0000

	.globl gYawnCloudAffineAnimCmds1
gYawnCloudAffineAnimCmds1: @ 0x085AD428
	.2byte 0x0080, 0x0080, 0x0000, 0x0000
	.2byte 0xFFF8, 0xFFF8, 0x0800, 0x0000
	.2byte 0x0008, 0x0008, 0x0800, 0x0000
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000

	.globl gYawnCloudAffineAnimCmds2
gYawnCloudAffineAnimCmds2: @ 0x085AD448
	.2byte 0x00C0, 0x00C0, 0x0000, 0x0000
	.2byte 0x0008, 0x0008, 0x0800, 0x0000
	.2byte 0xFFF8, 0xFFF8, 0x0800, 0x0000
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000

	.globl gYawnCloudAffineAnimCmds3
gYawnCloudAffineAnimCmds3: @ 0x085AD468
	.2byte 0x0100, 0x0100, 0x0000, 0x0000
	.2byte 0x0008, 0x0008, 0x0800, 0x0000
	.2byte 0xFFF8, 0xFFF8, 0x0800, 0x0000
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000

	.globl gYawnCloudAffineAnimTable
gYawnCloudAffineAnimTable: @ 0x085AD488
	.4byte gYawnCloudAffineAnimCmds1
	.4byte gYawnCloudAffineAnimCmds2
	.4byte gYawnCloudAffineAnimCmds3

	.globl gYawnCloudSpriteTemplate
gYawnCloudSpriteTemplate: @ 0x085AD494
	.2byte 0x2802, 0x2802
	.4byte gOamData_AffineNormal_ObjNormal_32x32
	.4byte gDummySpriteAnimTable
	.4byte 0
	.4byte gYawnCloudAffineAnimTable
	.4byte AnimYawnCloud
	.globl gSmokeBallEscapeCloudAffineAnimCmds1
gSmokeBallEscapeCloudAffineAnimCmds1: @ 0x085AD4AC
	.2byte 0x0080, 0x0080, 0x0000, 0x0000
	.2byte 0xFFFC, 0xFFFA, 0x1000, 0x0000
	.2byte 0x0004, 0x0006, 0x1000, 0x0000
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000

	.globl gSmokeBallEscapeCloudAffineAnimCmds2
gSmokeBallEscapeCloudAffineAnimCmds2: @ 0x085AD4CC
	.2byte 0x00C0, 0x00C0, 0x0000, 0x0000
	.2byte 0x0004, 0x0006, 0x1000, 0x0000
	.2byte 0xFFFC, 0xFFFA, 0x1000, 0x0000
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000

	.globl gSmokeBallEscapeCloudAffineAnimCmds3
gSmokeBallEscapeCloudAffineAnimCmds3: @ 0x085AD4EC
	.2byte 0x0100, 0x0100, 0x0000, 0x0000
	.2byte 0x0004, 0x0006, 0x1000, 0x0000
	.2byte 0xFFFC, 0xFFFA, 0x1000, 0x0000
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000

	.globl gSmokeBallEscapeCloudAffineAnimCmds4
gSmokeBallEscapeCloudAffineAnimCmds4: @ 0x085AD50C
	.2byte 0x0100, 0x0100, 0x0000, 0x0000
	.2byte 0x0008, 0x000A, 0x1E00, 0x0000
	.2byte 0xFFF8, 0xFFF6, 0x1000, 0x0000
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000

	.globl gSmokeBallEscapeCloudAffineAnimTable
gSmokeBallEscapeCloudAffineAnimTable: @ 0x085AD52C
	.4byte gSmokeBallEscapeCloudAffineAnimCmds1
	.4byte gSmokeBallEscapeCloudAffineAnimCmds2
	.4byte gSmokeBallEscapeCloudAffineAnimCmds3
	.4byte gSmokeBallEscapeCloudAffineAnimCmds4

	.globl gSmokeBallEscapeCloudSpriteTemplate
gSmokeBallEscapeCloudSpriteTemplate: @ 0x085AD53C
	.2byte 0x2802, 0x2802
	.4byte gOamData_AffineDouble_ObjNormal_32x32
	.4byte gDummySpriteAnimTable
	.4byte 0
	.4byte gSmokeBallEscapeCloudAffineAnimTable
	.4byte AnimSmokeBallEscapeCloud
	@ pret/pokeemerald-jp direct xref for 0x085AD554: battle_anim_effects_3.s: AnimTask_SquishAndSweatDroplets, AnimTask_SquishAndSweatDropletsStep
	.globl gBattleAnimEffects3Data_085AD554
gBattleAnimEffects3Data_085AD554: @ 0x085AD554
	@ analyzed canonical ROM range 0x085AD554-0x085AD573
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x20 entries=16
	.2byte 0xFFF0, 0x0010, 0x0600, 0x0000, 0x0010, 0xFFF0, 0x0C00, 0x0000
	.2byte 0xFFF0, 0x0010, 0x0600, 0x0000, 0x7FFF, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085AD574: battle_anim_effects_3.s: CreateSweatDroplets
	.globl gBattleAnimEffects3Data_085AD574
gBattleAnimEffects3Data_085AD574: @ 0x085AD574
	@ analyzed canonical ROM range 0x085AD574-0x085AD58B
sSpriteTemplate_085AD574: @ 0x085AD574
	rodata_sprite_template 0x2803, 0x2803, gOamData_AffineOff_ObjNormal_8x8, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, sub_0815DDF8
	.globl gFacadeBlendColors
gFacadeBlendColors: @ 0x085AD58C
	.2byte 0x073C, 0x16BC, 0x225B, 0x2DDB
	.2byte 0x3D5A, 0x48FA, 0x5479, 0x6419
	.2byte 0x5C19, 0x5019, 0x4019, 0x3419
	.2byte 0x281A, 0x181A, 0x0C1A, 0x001B
	.2byte 0x003B, 0x00BB, 0x013B, 0x019B
	.2byte 0x021C, 0x027C, 0x02FC, 0x037D

	.globl gRoarNoiseLineAnimCmds1
gRoarNoiseLineAnimCmds1: @ 0x085AD5BC
	.2byte 0x0000, 0x0003
	.2byte 0x0010, 0x0003
	.2byte 0xFFFE, 0x0000

	.globl gRoarNoiseLineAnimCmds2
gRoarNoiseLineAnimCmds2: @ 0x085AD5C8
	.2byte 0x0020, 0x0003
	.2byte 0x0030, 0x0003
	.2byte 0xFFFE, 0x0000

	.globl gRoarNoiseLineAnimTable
gRoarNoiseLineAnimTable: @ 0x085AD5D4
	.4byte gRoarNoiseLineAnimCmds1
	.4byte gRoarNoiseLineAnimCmds2

	.globl gRoarNoiseLineSpriteTemplate
gRoarNoiseLineSpriteTemplate: @ 0x085AD5DC
	.2byte 0x2745, 0x2745
	.4byte gOamData_AffineOff_ObjNormal_32x32
	.4byte gRoarNoiseLineAnimTable
	.4byte 0
	.4byte gDummySpriteAffineAnimTable
	.4byte AnimRoarNoiseLine
	@ pret/pokeemerald-jp direct xref for 0x085AD5F4: battle_anim_effects_3.s: AnimTask_GlareEyeDotsStep
	.globl gBattleAnimEffects3Data_085AD5F4
gBattleAnimEffects3Data_085AD5F4: @ 0x085AD5F4
	@ analyzed canonical ROM range 0x085AD5F4-0x085AD653
	@ pointer/nullable table
	.4byte 0x28082808 @ +0x0
	.4byte gOamData_AffineOff_ObjNormal_8x8 @ +0x4
	.4byte gDummySpriteAnimTable @ +0x8
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x10
	.4byte AnimGlareEyeDot @ +0x14
	.4byte 0x280C280C @ +0x18
	.4byte gOamData_AffineOff_ObjNormal_32x32 @ +0x1C
	.4byte gDummySpriteAnimTable @ +0x20
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x28
	.4byte AnimAssistPawprint @ +0x2C
	.4byte 0 @ +0x30
	.4byte 0x000018FC @ +0x34
	.4byte 0x00007FFF @ +0x38
	.4byte 0 @ +0x3C
	.4byte 0x01000100 @ +0x40
	.4byte 0x000000C0 @ +0x44
	.4byte 0 @ +0x48
	.4byte 0x00001804 @ +0x4C
	.4byte 0x00007FFF @ +0x50
	.4byte 0 @ +0x54
	.4byte 0x085AD624 @ +0x58
	.4byte 0x085AD634 @ +0x5C
	@ pret/pokeemerald-jp direct xref for 0x085AD654: battle_anim_effects_3.s: AnimTask_BarrageBall
	.globl gBattleAnimEffects3Data_085AD654
gBattleAnimEffects3Data_085AD654: @ 0x085AD654
	@ analyzed canonical ROM range 0x085AD654-0x085AD683
	@ pointer/nullable table
	.4byte 0x280E280E @ +0x0
	.4byte gOamData_AffineNormal_ObjNormal_32x32 @ +0x4
	.4byte gDummySpriteAnimTable @ +0x8
	.4byte 0 @ +0xC
	.4byte 0x085AD64C @ +0x10
	.4byte SpriteCallbackDummy @ +0x14
	.4byte 0x28072807 @ +0x18
	.4byte gOamData_AffineOff_ObjNormal_32x32 @ +0x1C
	.4byte gDummySpriteAnimTable @ +0x20
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x28
	.4byte AnimSmellingSaltsHand @ +0x2C
	@ pret/pokeemerald-jp direct xref for 0x085AD684: battle_anim_effects_3.s: AnimTask_SmellingSaltsSquish, AnimTask_SmellingSaltsSquishStep
	.globl gBattleAnimEffects3Data_085AD684
gBattleAnimEffects3Data_085AD684: @ 0x085AD684
	@ analyzed canonical ROM range 0x085AD684-0x085AD7CF
	@ pointer/nullable table
	.4byte 0xFFF00000 @ +0x0
	.4byte 0x00000600 @ +0x4
	.4byte 0x00100000 @ +0x8
	.4byte 0x00000600 @ +0xC
	.4byte 0x00007FFF @ +0x10
	.4byte 0 @ +0x14
	.4byte 0x280F280F @ +0x18
	.4byte gOamData_AffineOff_ObjNormal_32x32 @ +0x1C
	.4byte gDummySpriteAnimTable @ +0x20
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x28
	.4byte AnimSmellingSaltExclamation @ +0x2C
	.4byte 0x28072807 @ +0x30
	.4byte gOamData_AffineOff_ObjNormal_32x32 @ +0x34
	.4byte gDummySpriteAnimTable @ +0x38
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x40
	.4byte AnimHelpingHandClap @ +0x44
	.4byte 0x28122812 @ +0x48
	.4byte gOamData_AffineOff_ObjBlend_32x32 @ +0x4C
	.4byte gDummySpriteAnimTable @ +0x50
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x58
	.4byte AnimForesightMagnifyingGlass @ +0x5C
	.4byte 0x27F927F9 @ +0x60
	.4byte gOamData_AffineOff_ObjNormal_16x16 @ +0x64
	.4byte gDummySpriteAnimTable @ +0x68
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x70
	.4byte AnimMeteorMashStar @ +0x74
	.4byte 0x27F927F9 @ +0x78
	.4byte gOamData_AffineOff_ObjNormal_16x16 @ +0x7C
	.4byte gDummySpriteAnimTable @ +0x80
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x88
	.4byte sub_08106A14 @ +0x8C
	.4byte 0x280A280A @ +0x90
	.4byte gOamData_AffineOff_ObjNormal_64x64 @ +0x94
	.4byte gDummySpriteAnimTable @ +0x98
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0xA0
	.4byte AnimBlockX @ +0xA4
	.4byte 0x27F027F0 @ +0xA8
	.4byte gOamData_AffineOff_ObjNormal_32x32 @ +0xAC
	.4byte gDummySpriteAnimTable @ +0xB0
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0xB8
	.4byte sub_0815FDB8 @ +0xBC
	.4byte 0x00040000 @ +0xC0
	.4byte 0x00040040 @ +0xC4
	.4byte 0x0000FFFF @ +0xC8
	.4byte 0x085AD744 @ +0xCC
	.4byte 0x01000100 @ +0xD0
	.4byte 0 @ +0xD4
	.4byte 0 @ +0xD8
	.4byte 0x000008FC @ +0xDC
	.4byte 0x00007FFF @ +0xE0
	.4byte 0 @ +0xE4
	.4byte 0x0100FF00 @ +0xE8
	.4byte 0 @ +0xEC
	.4byte 0 @ +0xF0
	.4byte 0x00000804 @ +0xF4
	.4byte 0x00007FFF @ +0xF8
	.4byte 0 @ +0xFC
	.4byte 0x085AD754 @ +0x100
	.4byte 0x085AD76C @ +0x104
	.4byte 0x28252825 @ +0x108
	.4byte gOamData_AffineNormal_ObjNormal_64x64 @ +0x10C
	.4byte 0x085AD750 @ +0x110
	.4byte 0 @ +0x114
	.4byte 0x085AD784 @ +0x118
	.4byte AnimKnockOffStrike @ +0x11C
	.4byte 0 @ +0x120
	.4byte 0x000040FC @ +0x124
	.4byte 0x00007FFE @ +0x128
	.4byte 0 @ +0x12C
	.4byte 0x085AD7A4 @ +0x130
	.4byte 0x28262826 @ +0x134
	.4byte gOamData_AffineNormal_ObjBlend_64x64 @ +0x138
	.4byte gDummySpriteAnimTable @ +0x13C
	.4byte 0 @ +0x140
	.4byte 0x085AD7B4 @ +0x144
	.4byte AnimRecycle @ +0x148
	@ pret/pokeemerald-jp direct xref for 0x085AD7D0: battle_anim_effects_3.s: AnimTask_SlackOffSquish
	.globl gBattleAnimEffects3Data_085AD7D0
gBattleAnimEffects3Data_085AD7D0: @ 0x085AD7D0
	@ analyzed canonical ROM range 0x085AD7D0-0x085AD99F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x1D0 entries=232
	.2byte 0x0000, 0x0010, 0x0400, 0x0000, 0xFFFE, 0x0000, 0x0800, 0x0000
	.2byte 0x0000, 0x0004, 0x0400, 0x0000, 0x0000, 0x0000, 0x1800, 0x0000
	.2byte 0x0001, 0xFFFB, 0x1000, 0x0000, 0x7FFF, 0x0000, 0x0000, 0x0000
	.2byte 0x03E0, 0x001F, 0x001C, 0x001A, 0x0018, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6318, 0x0000, 0x7FFF
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0EE0, 0x0000
	.2byte 0xE2E0, 0x0000, 0x22E0, 0x000E, 0x22E0, 0x00E2, 0x22E0, 0x0E22
	.2byte 0x22E0, 0xDE22, 0x22E0, 0x0DE2, 0x22E0, 0x00DE, 0xE2E0, 0x000D
	.2byte 0xDEE0, 0x0000, 0x0D00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x00EE
	.2byte 0xE000, 0x0DE2, 0x2E00, 0x0DE2, 0x22E0, 0x0DE2, 0x222E, 0x0DE2
	.2byte 0x222E, 0x0DE2, 0x22E0, 0x0DE2, 0x2E00, 0x0DE2, 0xE000, 0x0DE2
	.2byte 0x0000, 0x0DEE, 0x0000, 0x0DD0, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0xE000, 0xEEEE, 0xE000, 0x2222, 0x0000, 0x222E
	.2byte 0x0000, 0x22E0, 0x0000, 0x2E00, 0x0000, 0xE000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0xEEEE, 0x000E, 0x2222, 0x00DE, 0xE222, 0x000D
	.2byte 0xDE22, 0x0000, 0x0DE2, 0x0000, 0x00DE, 0x0000, 0x000D, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0xE000, 0x0000, 0x2E00, 0x0000, 0x22E0
	.2byte 0x0000, 0x222E, 0xE000, 0x2222, 0xE000, 0xEEEE, 0x0000, 0xDDDD
	.2byte 0x0000, 0x0000, 0x000E, 0x0000, 0x00E2, 0x0000, 0x0E22, 0x0000
	.2byte 0xE222, 0x0000, 0x2222, 0x000E, 0xEEEE, 0x00DE, 0xDDDD, 0x00DD
	.2byte 0x0000, 0x0000, 0x0220, 0x0022, 0x2DD2, 0x020D, 0x00D2, 0x0200
	.2byte 0x00D2, 0x0200, 0x0020, 0x0D20, 0x0200, 0x00D2, 0x2000, 0x000D
	.2byte 0x0000, 0x0000, 0x0220, 0x0022, 0x2222, 0x0222, 0x2222, 0x0222
	.2byte 0x2222, 0x0222, 0x2220, 0x0D22, 0x2200, 0x00D2, 0x2000, 0x000D
	.2byte 0x0000, 0x0000, 0x0CC0, 0x00CC, 0xCDDC, 0x0C0D, 0x00DC, 0x0C00
	.2byte 0x00DC, 0x0C00, 0x00C0, 0x0DC0, 0x0C00, 0x00DC, 0xC000, 0x000D
	.2byte 0x0000, 0x0000, 0x0CC0, 0x00CC, 0xCCCC, 0x0CCC, 0xCCCC, 0x0CCC
	.2byte 0xCCCC, 0x0CCC, 0xCCC0, 0x0DCC, 0xCC00, 0x00DC, 0xC000, 0x000D
	.globl gText_Rom_5AD9A0
