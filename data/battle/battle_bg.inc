@ Battle background / window data decoded from 0473_moves_data.inc.
@ ROM range: 0x082EB7DC-0x082EBAC7.
@ This data corresponds to src/battle_bg.c, not move data.
@ Known external graphics/code pointers are kept numeric with semantic comments
@ so this file does not introduce unresolved symbols before their targets are analyzed.

sBattleBg_UnrefArray: @ 0x082EB7DC
	.2byte 0x0300, 0x0000 @ current pret: sUnrefArray

sVsLetter_V_OamData: @ 0x082EB7E0
	.2byte 0x0300, 0xC000, 0x0000, 0x0000 @ 64x64 affine-double V

sVsLetter_S_OamData: @ 0x082EB7E8
	.2byte 0x0300, 0xC000, 0x0040, 0x0000 @ 64x64 affine-double S; tileNum=64

sVsLetterAffineAnimCmds0: @ 0x082EB7F0
	.2byte 0x0080, 0x0080, 0x0000, 0x0000 @ AFFINEANIMCMD_FRAME(0x80,0x80,0,0)
	.2byte 0x7FFF, ANIM_V_SQUISH_AND_BOUNCE, ANIM_V_SQUISH_AND_BOUNCE, ANIM_V_SQUISH_AND_BOUNCE @ AFFINEANIMCMD_END

sVsLetterAffineAnimCmds1: @ 0x082EB800
	.2byte 0x0080, 0x0080, 0x0000, 0x0000 @ initial scale
	.2byte 0x0018, 0x0018, 0x8000, 0x0000 @ affine frame
	.2byte 0x0018, 0x0018, 0x8000, 0x0000 @ affine frame
	.2byte 0x7FFF, ANIM_V_SQUISH_AND_BOUNCE, ANIM_V_SQUISH_AND_BOUNCE, ANIM_V_SQUISH_AND_BOUNCE @ AFFINEANIMCMD_END

sVsLetterAffineAnimTable: @ 0x082EB820
	.4byte sVsLetterAffineAnimCmds0
	.4byte sVsLetterAffineAnimCmds1

	.globl gUnknown_82EB828
gUnknown_82EB828: @ 0x082EB828
sVsLetter_V_SpriteTemplate:
	.2byte 10000, 10000 @ TAG_VS_LETTERS
	.4byte sVsLetter_V_OamData
	.4byte gDummySpriteAnimTable @ gDummySpriteAnimTable
	.4byte 0
	.4byte sVsLetterAffineAnimTable
	.4byte sub_080387B4 @ SpriteCB_VsLetterDummy (Thumb)

	.globl gUnknown_82EB840
gUnknown_82EB840: @ 0x082EB840
sVsLetter_S_SpriteTemplate:
	.2byte 10000, 10000 @ TAG_VS_LETTERS
	.4byte sVsLetter_S_OamData
	.4byte gDummySpriteAnimTable @ gDummySpriteAnimTable
	.4byte 0
	.4byte sVsLetterAffineAnimTable
	.4byte sub_080387B4 @ SpriteCB_VsLetterDummy (Thumb)

	.globl gUnknown_82EB858
gUnknown_82EB858: @ 0x082EB858
sVsLettersSpriteSheet:
	.4byte gUnknown_8D77BB0 @ gVsLettersGfx
	.2byte 0x1000, 10000 @ size, TAG_VS_LETTERS

	.globl gUnknown_82EB860
gUnknown_82EB860: @ 0x082EB860
	.globl gBattleBgTemplates
gBattleBgTemplates:
	.2byte 0x0580, 0x0000 @ BG0: charBase=0 mapBase=24 screenSize=2 paletteMode=0 priority=0 baseTile=0
	.2byte 0x05C5, 0x0000 @ BG1: charBase=1 mapBase=28 screenSize=2 paletteMode=0 priority=0 baseTile=0
	.2byte 0x13E6, 0x0000 @ BG2: charBase=1 mapBase=30 screenSize=1 paletteMode=0 priority=1 baseTile=0
	.2byte 0x33AB, 0x0000 @ BG3: charBase=2 mapBase=26 screenSize=1 paletteMode=0 priority=3 baseTile=0

sStandardBattleWindowTemplates: @ 0x082EB870
	.byte 0, 2, 15, 26, 4, 0; .2byte 0x0090 @ B_WIN_MSG
	.byte 0, 2, 35, 15, 4, 0; .2byte 0x01B8 @ B_WIN_ACTION_PROMPT
	.byte 0, 19, 35, 10, 4, 5; .2byte 0x0190 @ B_WIN_ACTION_MENU
	.byte 0, 2, 55, 7, 2, 5; .2byte 0x0300 @ B_WIN_MOVE_NAME_1
	.byte 0, 10, 55, 7, 2, 5; .2byte 0x030E @ B_WIN_MOVE_NAME_2
	.byte 0, 2, 57, 7, 2, 5; .2byte 0x031C @ B_WIN_MOVE_NAME_3
	.byte 0, 10, 57, 7, 2, 5; .2byte 0x032A @ B_WIN_MOVE_NAME_4
	.byte 0, 19, 55, 5, 2, 5; .2byte 0x0290 @ B_WIN_PP
	.byte 0, 19, 57, 6, 2, 5; .2byte 0x029A @ B_WIN_DUMMY
	.byte 0, 24, 55, 5, 2, 5; .2byte 0x02A6 @ B_WIN_PP_REMAINING
	.byte 0, 25, 57, 4, 2, 5; .2byte 0x02B0 @ B_WIN_MOVE_TYPE
	.byte 0, 19, 55, 10, 4, 5; .2byte 0x02B8 @ B_WIN_SWITCH_PROMPT
	.byte 0, 26, 9, 3, 4, 5; .2byte 0x0100 @ B_WIN_YESNO
	.byte 1, 19, 8, 10, 11, 5; .2byte 0x0100 @ B_WIN_LEVEL_UP_BOX
	.byte 2, 18, 0, 12, 3, 6; .2byte 0x016E @ B_WIN_LEVEL_UP_BANNER
	.byte 1, 2, 3, 7, 2, 5; .2byte 0x0020 @ B_WIN_VS_PLAYER
	.byte 2, 2, 3, 7, 2, 5; .2byte 0x0040 @ B_WIN_VS_OPPONENT
	.byte 1, 2, 2, 7, 2, 5; .2byte 0x0020 @ B_WIN_VS_MULTI_PLAYER_1
	.byte 2, 2, 2, 7, 2, 5; .2byte 0x0040 @ B_WIN_VS_MULTI_PLAYER_2
	.byte 1, 2, 6, 7, 2, 5; .2byte 0x0060 @ B_WIN_VS_MULTI_PLAYER_3
	.byte 2, 2, 6, 7, 2, 5; .2byte 0x0080 @ B_WIN_VS_MULTI_PLAYER_4
	.byte 0, 12, 2, 6, 2, 0; .2byte 0x00A0 @ B_WIN_VS_OUTCOME_DRAW
	.byte 0, 6, 2, 3, 2, 0; .2byte 0x00A0 @ B_WIN_VS_OUTCOME_LEFT
	.byte 0, 21, 2, 3, 2, 0; .2byte 0x00A8 @ B_WIN_VS_OUTCOME_RIGHT
	.byte 255, 0, 0, 0, 0, 0; .2byte 0x0000 @ DUMMY_WIN_TEMPLATE

sBattleArenaWindowTemplates: @ 0x082EB938
	.byte 0, 2, 15, 26, 4, 0; .2byte 0x0090 @ B_WIN_MSG
	.byte 0, 2, 35, 15, 4, 0; .2byte 0x01B8 @ B_WIN_ACTION_PROMPT
	.byte 0, 19, 35, 10, 4, 5; .2byte 0x0190 @ B_WIN_ACTION_MENU
	.byte 0, 2, 55, 7, 2, 5; .2byte 0x0300 @ B_WIN_MOVE_NAME_1
	.byte 0, 10, 55, 7, 2, 5; .2byte 0x030E @ B_WIN_MOVE_NAME_2
	.byte 0, 2, 57, 7, 2, 5; .2byte 0x031C @ B_WIN_MOVE_NAME_3
	.byte 0, 10, 57, 7, 2, 5; .2byte 0x032A @ B_WIN_MOVE_NAME_4
	.byte 0, 19, 55, 5, 2, 5; .2byte 0x0290 @ B_WIN_PP
	.byte 0, 19, 57, 6, 2, 5; .2byte 0x029A @ B_WIN_DUMMY
	.byte 0, 24, 55, 5, 2, 5; .2byte 0x02A6 @ B_WIN_PP_REMAINING
	.byte 0, 25, 57, 4, 2, 5; .2byte 0x02B0 @ B_WIN_MOVE_TYPE
	.byte 0, 19, 55, 10, 4, 5; .2byte 0x02B8 @ B_WIN_SWITCH_PROMPT
	.byte 0, 26, 9, 3, 4, 5; .2byte 0x0100 @ B_WIN_YESNO
	.byte 1, 19, 8, 10, 11, 5; .2byte 0x0100 @ B_WIN_LEVEL_UP_BOX
	.byte 2, 18, 0, 12, 3, 6; .2byte 0x016E @ B_WIN_LEVEL_UP_BANNER
	.byte 0, 8, 1, 5, 2, 5; .2byte 0x0100 @ ARENA_WIN_PLAYER_NAME
	.byte 0, 13, 1, 4, 2, 5; .2byte 0x010A @ ARENA_WIN_VS
	.byte 0, 17, 1, 5, 2, 5; .2byte 0x0112 @ ARENA_WIN_OPPONENT_NAME
	.byte 0, 13, 4, 4, 2, 5; .2byte 0x011C @ ARENA_WIN_MIND
	.byte 0, 13, 6, 4, 2, 5; .2byte 0x0124 @ ARENA_WIN_SKILL
	.byte 0, 13, 8, 4, 2, 5; .2byte 0x012C @ ARENA_WIN_BODY
	.byte 0, 10, 11, 10, 2, 5; .2byte 0x0134 @ ARENA_WIN_JUDGMENT_TITLE
	.byte 0, 4, 15, 22, 4, 7; .2byte 0x0090 @ ARENA_WIN_JUDGMENT_TEXT
	.byte 255, 0, 0, 0, 0, 0; .2byte 0x0000 @ DUMMY_WIN_TEMPLATE

	.globl gUnknown_82EB9F8
gUnknown_82EB9F8: @ 0x082EB9F8
	.globl gBattleWindowTemplates
gBattleWindowTemplates:
	.4byte sStandardBattleWindowTemplates
	.4byte sBattleArenaWindowTemplates

	.globl gUnknown_82EBA00
gUnknown_82EBA00: @ 0x082EBA00
sBattleEnvironmentTable:
	@ BATTLE_ENVIRONMENT_GRASS
	.4byte 0x08D77E0C @ gBattleEnvironmentTiles_TallGrass
	.4byte 0x08D783F4 @ gBattleEnvironmentTilemap_TallGrass
	.4byte 0x08D7E324 @ gBattleEnvironmentAnimTiles_TallGrass
	.4byte 0x08D7E8AC @ gBattleEnvironmentAnimTilemap_TallGrass
	.4byte 0x08D783BC @ gBattleEnvironmentPalette_TallGrass
	@ BATTLE_ENVIRONMENT_LONG_GRASS
	.4byte 0x08D786A4 @ gBattleEnvironmentTiles_LongGrass
	.4byte 0x08D78D5C @ gBattleEnvironmentTilemap_LongGrass
	.4byte 0x08D7EA68 @ gBattleEnvironmentAnimTiles_LongGrass
	.4byte 0x08D7F178 @ gBattleEnvironmentAnimTilemap_LongGrass
	.4byte 0x08D78D1C @ gBattleEnvironmentPalette_LongGrass
	@ BATTLE_ENVIRONMENT_SAND
	.4byte 0x08D7900C @ gBattleEnvironmentTiles_Sand
	.4byte 0x08D7964C @ gBattleEnvironmentTilemap_Sand
	.4byte 0x08D7F3B0 @ gBattleEnvironmentAnimTiles_Sand
	.4byte 0x08D7F8F4 @ gBattleEnvironmentAnimTilemap_Sand
	.4byte 0x08D79604 @ gBattleEnvironmentPalette_Sand
	@ BATTLE_ENVIRONMENT_UNDERWATER
	.4byte 0x08D798FC @ gBattleEnvironmentTiles_Underwater
	.4byte 0x08D79EFC @ gBattleEnvironmentTilemap_Underwater
	.4byte gUnknown_8D7FA9C @ gBattleEnvironmentAnimTiles_Underwater
	.4byte gUnknown_8D7FF68 @ gBattleEnvironmentAnimTilemap_Underwater
	.4byte 0x08D79EB4 @ gBattleEnvironmentPalette_Underwater
	@ BATTLE_ENVIRONMENT_WATER
	.4byte gUnknown_8D7A1AC @ gBattleEnvironmentTiles_Water
	.4byte gUnknown_8D7A7C4 @ gBattleEnvironmentTilemap_Water
	.4byte 0x08D800F8 @ gBattleEnvironmentAnimTiles_Water
	.4byte 0x08D80704 @ gBattleEnvironmentAnimTilemap_Water
	.4byte 0x08D7A780 @ gBattleEnvironmentPalette_Water
	@ BATTLE_ENVIRONMENT_POND
	.4byte 0x08D7AA74 @ gBattleEnvironmentTiles_PondWater
	.4byte 0x08D7B05C @ gBattleEnvironmentTilemap_PondWater
	.4byte 0x08D808A8 @ gBattleEnvironmentAnimTiles_PondWater
	.4byte 0x08D80DF4 @ gBattleEnvironmentAnimTilemap_PondWater
	.4byte 0x08D7B01C @ gBattleEnvironmentPalette_PondWater
	@ BATTLE_ENVIRONMENT_MOUNTAIN
	.4byte 0x08D7B30C @ gBattleEnvironmentTiles_Rock
	.4byte 0x08D7B908 @ gBattleEnvironmentTilemap_Rock
	.4byte 0x08D80F40 @ gBattleEnvironmentAnimTiles_Rock
	.4byte 0x08D81520 @ gBattleEnvironmentAnimTilemap_Rock
	.4byte 0x08D7B8CC @ gBattleEnvironmentPalette_Rock
	@ BATTLE_ENVIRONMENT_CAVE
	.4byte gUnknown_8D7BBB8 @ gBattleEnvironmentTiles_Cave
	.4byte gUnknown_8D7C1F8 @ gBattleEnvironmentTilemap_Cave
	.4byte gUnknown_8D816B4 @ gBattleEnvironmentAnimTiles_Cave
	.4byte gUnknown_8D81ED0 @ gBattleEnvironmentAnimTilemap_Cave
	.4byte 0x08D7C1B0 @ gBattleEnvironmentPalette_Cave
	@ BATTLE_ENVIRONMENT_BUILDING
	.4byte gUnknown_8D7C4E4 @ gBattleEnvironmentTiles_Building
	.4byte gUnknown_8D7CACC @ gBattleEnvironmentTilemap_Building
	.4byte gUnknown_8D82178 @ gBattleEnvironmentAnimTiles_Building
	.4byte gUnknown_8D82588 @ gBattleEnvironmentAnimTilemap_Building
	.4byte 0x08D7DF58 @ gBattleEnvironmentPalette_Building
	@ BATTLE_ENVIRONMENT_PLAIN
	.4byte gUnknown_8D7C4E4 @ gBattleEnvironmentTiles_Building
	.4byte gUnknown_8D7CACC @ gBattleEnvironmentTilemap_Building
	.4byte gUnknown_8D82178 @ gBattleEnvironmentAnimTiles_Building
	.4byte gUnknown_8D82588 @ gBattleEnvironmentAnimTilemap_Building
	.4byte 0x08D7C4A8 @ gBattleEnvironmentPalette_Plain
