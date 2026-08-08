@ Battle interface sprite templates, subsprites, status summary graphics and colors.

sOamData_64x32: @ 0x082FCB30
	@ 64x32 horizontal, priority 1.
	rodata_sprite_oam_data 0, 0, 0, 0, 0, 1, 0, 0, 3, 0, 1, 0, 0

	.globl gUnknown_82FCB38
sHealthboxPlayerSpriteTemplates: @ 0x082FCB38
gUnknown_82FCB38:
	rodata_sprite_template TAG_HEALTHBOX_PLAYER1_TILE, TAG_HEALTHBOX_PAL, sOamData_64x32, gDummySpriteAnimTable, NULL, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	rodata_sprite_template TAG_HEALTHBOX_PLAYER2_TILE, TAG_HEALTHBOX_PAL, sOamData_64x32, gDummySpriteAnimTable, NULL, gDummySpriteAffineAnimTable, SpriteCallbackDummy

	.globl gUnknown_82FCB68
sHealthboxOpponentSpriteTemplates: @ 0x082FCB68
gUnknown_82FCB68:
	rodata_sprite_template TAG_HEALTHBOX_OPPONENT1_TILE, TAG_HEALTHBOX_PAL, sOamData_64x32, gDummySpriteAnimTable, NULL, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	rodata_sprite_template TAG_HEALTHBOX_OPPONENT2_TILE, TAG_HEALTHBOX_PAL, sOamData_64x32, gDummySpriteAnimTable, NULL, gDummySpriteAffineAnimTable, SpriteCallbackDummy

	.globl gUnknown_82FCB98
sHealthboxSafariSpriteTemplate: @ 0x082FCB98
gUnknown_82FCB98:
	rodata_sprite_template TAG_HEALTHBOX_SAFARI_TILE, TAG_HEALTHBOX_PAL, sOamData_64x32, gDummySpriteAnimTable, NULL, gDummySpriteAffineAnimTable, SpriteCallbackDummy

sOamData_Healthbar: @ 0x082FCBB0
	@ 32x8 horizontal, priority 1.
	rodata_sprite_oam_data 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0

	.globl gUnknown_82FCBB8
sHealthbarSpriteTemplates: @ 0x082FCBB8
gUnknown_82FCBB8:
	rodata_sprite_template TAG_HEALTHBAR_PLAYER1_TILE, TAG_HEALTHBAR_PAL, sOamData_Healthbar, gDummySpriteAnimTable, NULL, gDummySpriteAffineAnimTable, SpriteCB_HealthBar
	rodata_sprite_template TAG_HEALTHBAR_OPPONENT1_TILE, TAG_HEALTHBAR_PAL, sOamData_Healthbar, gDummySpriteAnimTable, NULL, gDummySpriteAffineAnimTable, SpriteCB_HealthBar
	rodata_sprite_template TAG_HEALTHBAR_PLAYER2_TILE, TAG_HEALTHBAR_PAL, sOamData_Healthbar, gDummySpriteAnimTable, NULL, gDummySpriteAffineAnimTable, SpriteCB_HealthBar
	rodata_sprite_template TAG_HEALTHBAR_OPPONENT2_TILE, TAG_HEALTHBAR_PAL, sOamData_Healthbar, gDummySpriteAnimTable, NULL, gDummySpriteAffineAnimTable, SpriteCB_HealthBar

sUnused_Subsprites_0: @ 0x082FCC18
	rodata_subsprite -16,  0, 1, 3,  0, 1 @ 64x32
	rodata_subsprite  48,  0, 0, 2, 32, 1 @ 32x32
	rodata_subsprite -16, 32, 1, 1, 48, 1 @ 32x8
	rodata_subsprite  16, 32, 1, 1, 52, 1 @ 32x8
	rodata_subsprite  48, 32, 1, 1, 56, 1 @ 32x8

sUnused_Subsprites_2: @ 0x082FCC2C
	rodata_subsprite -16,  0, 1, 3,  64, 1 @ 64x32
	rodata_subsprite  48,  0, 0, 2,  96, 1 @ 32x32
	rodata_subsprite -16, 32, 1, 1, 112, 1 @ 32x8
	rodata_subsprite  16, 32, 1, 1, 116, 1 @ 32x8
	rodata_subsprite  48, 32, 1, 1, 120, 1 @ 32x8

sUnused_Subsprites_1: @ 0x082FCC40
	rodata_subsprite -16, 0, 1, 3,  0, 1 @ 64x32
	rodata_subsprite  48, 0, 0, 2, 32, 1 @ 32x32

sUnused_Subsprites_3: @ 0x082FCC48
	rodata_subsprite -16, 0, 1, 3,  0, 1 @ 64x32
	rodata_subsprite  48, 0, 0, 2, 32, 1 @ 32x32

sHealthBar_Subsprites_Player: @ 0x082FCC50
	rodata_subsprite -16, 0, 1, 1, 0, 1 @ 32x8
	rodata_subsprite  16, 0, 1, 1, 4, 1 @ 32x8

sHealthBar_Subsprites_Opponent: @ 0x082FCC58
	rodata_subsprite -16, 0, 1, 1, 0, 1 @ 32x8
	rodata_subsprite  16, 0, 1, 1, 4, 1 @ 32x8
	rodata_subsprite -32, 0, 0, 0, 8, 1 @ 8x8

sUnused_SubspriteTable: @ 0x082FCC64
	rodata_subsprite_table 5, sUnused_Subsprites_0
	rodata_subsprite_table 2, sUnused_Subsprites_1
	rodata_subsprite_table 5, sUnused_Subsprites_2
	rodata_subsprite_table 2, sUnused_Subsprites_3

	.globl gUnknown_82FCC84
sHealthBar_SubspriteTables: @ 0x082FCC84
gUnknown_82FCC84:
	rodata_subsprite_table 2, sHealthBar_Subsprites_Player
	rodata_subsprite_table 3, sHealthBar_Subsprites_Opponent

sStatusSummaryBar_Subsprites_Enter: @ 0x082FCC94
	rodata_subsprite -96, 0, 1, 1,  0, 1 @ 32x8
	rodata_subsprite -64, 0, 1, 1,  4, 1 @ 32x8
	rodata_subsprite -32, 0, 1, 1,  8, 1 @ 32x8
	rodata_subsprite   0, 0, 1, 1, 12, 1 @ 32x8

sStatusSummaryBar_Subsprites_Exit: @ 0x082FCCA4
	rodata_subsprite -96, 0, 1, 1,  0, 1 @ 32x8
	rodata_subsprite -64, 0, 1, 1,  4, 1 @ 32x8
	rodata_subsprite -32, 0, 1, 1,  8, 1 @ 32x8
	rodata_subsprite   0, 0, 1, 1,  8, 1 @ 32x8
	rodata_subsprite  32, 0, 1, 1,  8, 1 @ 32x8
	rodata_subsprite  64, 0, 1, 1, 12, 1 @ 32x8

	.globl gUnknown_82FCCBC
sStatusSummaryBar_SubspriteTable_Enter: @ 0x082FCCBC
gUnknown_82FCCBC:
	rodata_subsprite_table 4, sStatusSummaryBar_Subsprites_Enter

	.globl gUnknown_82FCCC4
sStatusSummaryBar_SubspriteTable_Exit: @ 0x082FCCC4
gUnknown_82FCCC4:
	rodata_subsprite_table 6, sStatusSummaryBar_Subsprites_Exit

sUnusedStatusSummary: @ 0x082FCCCC
	.incbin "build/graphics/battle_interface/unused_status_summary.4bpp"

	.globl gUnknown_82FCD2C
sStatusSummaryBarSpriteSheet: @ 0x082FCD2C
gUnknown_82FCD2C:
	rodata_compressed_sprite_sheet 0x08D8FBA4, 0x0200, TAG_STATUS_SUMMARY_BAR_TILE @ gBattleInterface_BallStatusBarGfx

	.globl gUnknown_82FCD34
sStatusSummaryBarSpritePal: @ 0x082FCD34
gUnknown_82FCD34:
	rodata_sprite_palette 0x08C11BA4, TAG_STATUS_SUMMARY_BAR_PAL @ gBattleInterface_BallStatusBarPal

	.globl gUnknown_82FCD3C
sStatusSummaryBallsSpritePal: @ 0x082FCD3C
gUnknown_82FCD3C:
	rodata_sprite_palette 0x08C11BC4, TAG_STATUS_SUMMARY_BALLS_PAL @ gBattleInterface_BallDisplayPal

	.globl gUnknown_82FCD44
sStatusSummaryBallsSpriteSheet: @ 0x082FCD44
gUnknown_82FCD44:
	rodata_sprite_sheet 0x08C12424, 0x0080, TAG_STATUS_SUMMARY_BALLS_TILE @ gHealthboxElementsGfxTable[HEALTHBOX_GFX_STATUS_BALL]

sOamData_Unused64x32: @ 0x082FCD4C
	@ 64x32 horizontal, priority 1.
	rodata_sprite_oam_data 0, 0, 0, 0, 0, 1, 0, 0, 3, 0, 1, 0, 0

sOamData_StatusSummaryBalls: @ 0x082FCD54
	@ 8x8 square, priority 1.
	rodata_sprite_oam_data 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0

	.globl gUnknown_82FCD5C
sStatusSummaryBarSpriteTemplates: @ 0x082FCD5C
gUnknown_82FCD5C:
	rodata_sprite_template TAG_STATUS_SUMMARY_BAR_TILE, TAG_STATUS_SUMMARY_BAR_PAL, sOamData_64x32, gDummySpriteAnimTable, NULL, gDummySpriteAffineAnimTable, SpriteCB_StatusSummaryBar
	rodata_sprite_template TAG_STATUS_SUMMARY_BAR_TILE, TAG_STATUS_SUMMARY_BAR_PAL, sOamData_64x32, gDummySpriteAnimTable, NULL, gDummySpriteAffineAnimTable, SpriteCB_StatusSummaryBar

	.globl gUnknown_82FCD8C
sStatusSummaryBallsSpriteTemplates: @ 0x082FCD8C
gUnknown_82FCD8C:
	rodata_sprite_template TAG_STATUS_SUMMARY_BALLS_TILE, TAG_STATUS_SUMMARY_BALLS_PAL, sOamData_StatusSummaryBalls, gDummySpriteAnimTable, NULL, gDummySpriteAffineAnimTable, SpriteCB_StatusSummaryBallsOnBattleStart
	rodata_sprite_template TAG_STATUS_SUMMARY_BALLS_TILE, TAG_STATUS_SUMMARY_BALLS_PAL, sOamData_StatusSummaryBalls, gDummySpriteAnimTable, NULL, gDummySpriteAffineAnimTable, SpriteCB_StatusSummaryBallsOnBattleStart

	.globl gUnknown_82FCDBC
sEmptyWhiteText_LongGrayHighlight: @ 0x082FCDBC
gUnknown_82FCDBC:
	.byte 0xFC, 0x01, 0x01, 0xFC, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

	.globl gUnknown_82FCDDA
sEmptyWhiteText_GrayHighlight: @ 0x082FCDDA
gUnknown_82FCDDA:
	.byte 0xFC, 0x01, 0x01, 0xFC, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00

	.globl gUnknown_82FCDEE
sEmptyWhiteText_TransparentHighlight: @ 0x082FCDEE
gUnknown_82FCDEE:
	.byte 0xFC, 0x01, 0x01, 0xFC, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00

	.globl gUnknown_82FCE02
sStatusIconColors: @ 0x082FCE02
gUnknown_82FCE02:
	.2byte 0x6198, 0x0EF7, 0x4694, 0x72D1, 0x29DC
