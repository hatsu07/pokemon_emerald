@ Pokémon Emerald JP - use Pokéblock screen static tables
@ Exact ROM layout: 0x085C0994-0x085C0AA3.
@ Names and structure follow proven use_pokeblock consumers/upstream layout.

	.globl sConditionToMonData
sConditionToMonData: @ 0x085C0994
	.4byte 0x00000016 @ CONDITION_COOL   -> MON_DATA_COOL
	.4byte 0x0000002F @ CONDITION_TOUGH  -> MON_DATA_TOUGH
	.4byte 0x00000021 @ CONDITION_SMART  -> MON_DATA_SMART
	.4byte 0x00000018 @ CONDITION_CUTE   -> MON_DATA_CUTE
	.4byte 0x00000017 @ CONDITION_BEAUTY -> MON_DATA_BEAUTY

	.globl sConditionToFlavor
sConditionToFlavor: @ 0x085C09A8
	.byte 0 @ CONDITION_COOL   -> FLAVOR_SPICY
	.byte 4 @ CONDITION_TOUGH  -> FLAVOR_SOUR
	.byte 3 @ CONDITION_SMART  -> FLAVOR_BITTER
	.byte 2 @ CONDITION_CUTE   -> FLAVOR_SWEET
	.byte 1 @ CONDITION_BEAUTY -> FLAVOR_DRY

	.globl sNatureTextColors
sNatureTextColors: @ 0x085C09AD
	.byte 0 @ TEXT_COLOR_TRANSPARENT
	.byte 8 @ TEXT_COLOR_BLUE
	.byte 1 @ TEXT_COLOR_WHITE

	.globl sBgTemplates
sBgTemplates: @ 0x085C09B0
	.4byte 0x000001F8
	.4byte 0x000031E1
	.4byte 0x004021DF
	.4byte 0x00001172

	.globl sWindowTemplates
sWindowTemplates: @ 0x085C09C0
	.byte 0, 13, 1, 12, 4, 15
	.2byte 1
	.byte 0, 0, 14, 10, 2, 15
	.2byte 0x31
	.byte 0, 1, 17, 28, 2, 15
	.2byte 0x45
	.byte 0xFF, 0, 0, 0, 0, 0
	.2byte 0

	.globl sUsePokeblockYesNoWinTemplate
sUsePokeblockYesNoWinTemplate: @ 0x085C09E0
	.byte 0, 24, 11, 5, 4, 15
	.2byte 0x7D

	.globl sConditionNames
sConditionNames: @ 0x085C09E8
	.4byte gText_Rom_5CBD21 @ COOL
	.4byte gText_Rom_5CBD37 @ TOUGH
	.4byte gText_Rom_5CBD32 @ SMART
	.4byte gText_Rom_5CBD2D @ CUTE
	.4byte gText_Rom_5CBD27 @ BEAUTY

	.globl sSpriteSheet_UpDown
sSpriteSheet_UpDown: @ 0x085C09FC
	.4byte gUsePokeblockUpDown_Gfx
	.2byte 0x200
	.2byte 0

	.globl sSpritePalette_UpDown
sSpritePalette_UpDown: @ 0x085C0A04
	.4byte gUsePokeblockUpDown_Pal
	.2byte 0
	.2byte 0

	.globl sUpDownCoordsOnGraph
sUpDownCoordsOnGraph: @ 0x085C0A0C
	.2byte 156, 36
	.2byte 117, 59
	.2byte 117, 118
	.2byte 197, 118
	.2byte 197, 59

sOam_UpDown: @ 0x085C0A20
	.byte 0x00, 0x40, 0x00, 0x80, 0x00, 0x04, 0x00, 0x00

sAnim_Up: @ 0x085C0A28
	.2byte 0, 5
	.2byte 0xFFFF, 0

sAnim_Down: @ 0x085C0A30
	.2byte 8, 5
	.2byte 0xFFFF, 0

sAnims_UpDown: @ 0x085C0A38
	.4byte sAnim_Up
	.4byte sAnim_Down

	.globl sSpriteTemplate_UpDown
sSpriteTemplate_UpDown: @ 0x085C0A40
	.2byte 0
	.2byte 0
	.4byte sOam_UpDown
	.4byte sAnims_UpDown
	.4byte 0
	.4byte gDummySpriteAffineAnimTable
	.4byte SpriteCallbackDummy

sOam_Condition: @ 0x085C0A58
	.byte 0x00, 0x40, 0x00, 0xC0, 0x00, 0x04, 0x00, 0x00

sAnim_Condition_0: @ 0x085C0A60
	.2byte 0, 5
	.2byte 0xFFFF, 0

sAnim_Condition_1: @ 0x085C0A68
	.2byte 32, 5
	.2byte 0xFFFF, 0

sAnim_Condition_2: @ 0x085C0A70
	.2byte 64, 5
	.2byte 0xFFFF, 0

sAnims_Condition: @ 0x085C0A78
	.4byte sAnim_Condition_0
	.4byte sAnim_Condition_1
	.4byte sAnim_Condition_2

	.globl sSpriteTemplate_Condition
sSpriteTemplate_Condition: @ 0x085C0A84
	.2byte 1
	.2byte 1
	.4byte sOam_Condition
	.4byte sAnims_Condition
	.4byte 0
	.4byte gDummySpriteAffineAnimTable
	.4byte sub_0816817C @ upstream semantic: SpriteCB_Condition

	.globl sSpritePalette_Condition
sSpritePalette_Condition: @ 0x085C0A9C
	.4byte gUsePokeblockCondition_Pal
	.2byte 1
	.2byte 0

	.if (. - sConditionToMonData) != 0x110
	.error "use Pokeblock static table range size mismatch"
	.endif
