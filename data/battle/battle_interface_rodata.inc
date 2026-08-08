@ Battle interface sprite templates, subsprites, status summary graphics and colors.

sOamData_64x32: @ 0x082FCB30
	.2byte 0x4000, 0xC000, 0x0400, 0x0000

	.globl gUnknown_82FCB38
sHealthboxPlayerSpriteTemplates: @ 0x082FCB38
gUnknown_82FCB38:
	.4byte 0xD6FFD6FF, sOamData_64x32, 0x082BF304, 0x00000000, 0x082BF310, 0x08007141
	.4byte 0xD6FFD700, sOamData_64x32, 0x082BF304, 0x00000000, 0x082BF310, 0x08007141

	.globl gUnknown_82FCB68
sHealthboxOpponentSpriteTemplates: @ 0x082FCB68
gUnknown_82FCB68:
	.4byte 0xD6FFD701, sOamData_64x32, 0x082BF304, 0x00000000, 0x082BF310, 0x08007141
	.4byte 0xD6FFD702, sOamData_64x32, 0x082BF304, 0x00000000, 0x082BF310, 0x08007141

	.globl gUnknown_82FCB98
sHealthboxSafariSpriteTemplate: @ 0x082FCB98
gUnknown_82FCB98:
	.4byte 0xD6FFD70B, sOamData_64x32, 0x082BF304, 0x00000000, 0x082BF310, 0x08007141

sOamData_Healthbar: @ 0x082FCBB0
	.2byte 0x4000, 0x4000, 0x0400, 0x0000

	.globl gUnknown_82FCBB8
sHealthbarSpriteTemplates: @ 0x082FCBB8
gUnknown_82FCBB8:
	.4byte 0xD704D704, sOamData_Healthbar, 0x082BF304, 0x00000000, 0x082BF310, 0x080722C5
	.4byte 0xD704D705, sOamData_Healthbar, 0x082BF304, 0x00000000, 0x082BF310, 0x080722C5
	.4byte 0xD704D706, sOamData_Healthbar, 0x082BF304, 0x00000000, 0x082BF310, 0x080722C5
	.4byte 0xD704D707, sOamData_Healthbar, 0x082BF304, 0x00000000, 0x082BF310, 0x080722C5

sUnused_Subsprites_0: @ 0x082FCC18
	.4byte 0x400D00F0, 0x42080030, 0x430520F0, 0x43452010
	.4byte 0x43852030

sUnused_Subsprites_2: @ 0x082FCC2C
	.4byte 0x440D00F0, 0x46080030, 0x470520F0, 0x47452010
	.4byte 0x47852030

sUnused_Subsprites_1: @ 0x082FCC40
	.4byte 0x400D00F0, 0x42080030

sUnused_Subsprites_3: @ 0x082FCC48
	.4byte 0x400D00F0, 0x42080030

sHealthBar_Subsprites_Player: @ 0x082FCC50
	.4byte 0x400500F0, 0x40450010

sHealthBar_Subsprites_Opponent: @ 0x082FCC58
	.4byte 0x400500F0, 0x40450010, 0x408000E0

sUnused_SubspriteTable: @ 0x082FCC64
	.4byte 5, sUnused_Subsprites_0
	.4byte 2, sUnused_Subsprites_1
	.4byte 5, sUnused_Subsprites_2
	.4byte 2, sUnused_Subsprites_3

	.globl gUnknown_82FCC84
sHealthBar_SubspriteTables: @ 0x082FCC84
gUnknown_82FCC84:
	.4byte 2, sHealthBar_Subsprites_Player
	.4byte 3, sHealthBar_Subsprites_Opponent

sStatusSummaryBar_Subsprites_Enter: @ 0x082FCC94
	.4byte 0x400500A0, 0x404500C0, 0x408500E0, 0x40C50000

sStatusSummaryBar_Subsprites_Exit: @ 0x082FCCA4
	.4byte 0x400500A0, 0x404500C0, 0x408500E0, 0x40850000
	.4byte 0x40850020, 0x40C50040

	.globl gUnknown_82FCCBC
sStatusSummaryBar_SubspriteTable_Enter: @ 0x082FCCBC
gUnknown_82FCCBC:
	.4byte 4, sStatusSummaryBar_Subsprites_Enter

	.globl gUnknown_82FCCC4
sStatusSummaryBar_SubspriteTable_Exit: @ 0x082FCCC4
gUnknown_82FCCC4:
	.4byte 6, sStatusSummaryBar_Subsprites_Exit

sUnusedStatusSummary: @ 0x082FCCCC
	.incbin "build/graphics/battle_interface/unused_status_summary.4bpp"

	.globl gUnknown_82FCD2C
sStatusSummaryBarSpriteSheet: @ 0x082FCD2C
gUnknown_82FCD2C:
	.4byte 0x08D8FBA4, 0xD70C0200

	.globl gUnknown_82FCD34
sStatusSummaryBarSpritePal: @ 0x082FCD34
gUnknown_82FCD34:
	.4byte 0x08C11BA4, 0x0000D710

	.globl gUnknown_82FCD3C
sStatusSummaryBallsSpritePal: @ 0x082FCD3C
gUnknown_82FCD3C:
	.4byte 0x08C11BC4, 0x0000D712

	.globl gUnknown_82FCD44
sStatusSummaryBallsSpriteSheet: @ 0x082FCD44
gUnknown_82FCD44:
	.4byte 0x08C12424, 0xD7140080

sOamData_Unused64x32: @ 0x082FCD4C
	.2byte 0x4000, 0xC000, 0x0400, 0x0000

sOamData_StatusSummaryBalls: @ 0x082FCD54
	.2byte 0x0000, 0x0000, 0x0400, 0x0000

	.globl gUnknown_82FCD5C
sStatusSummaryBarSpriteTemplates: @ 0x082FCD5C
gUnknown_82FCD5C:
	.4byte 0xD710D70C, sOamData_64x32, 0x082BF304, 0x00000000, 0x082BF310, 0x08073975
	.4byte 0xD710D70C, sOamData_64x32, 0x082BF304, 0x00000000, 0x082BF310, 0x08073975

	.globl gUnknown_82FCD8C
sStatusSummaryBallsSpriteTemplates: @ 0x082FCD8C
gUnknown_82FCD8C:
	.4byte 0xD712D714, sOamData_StatusSummaryBalls, 0x082BF304, 0x00000000, 0x082BF310, 0x080739C1
	.4byte 0xD712D714, sOamData_StatusSummaryBalls, 0x082BF304, 0x00000000, 0x082BF310, 0x080739C1

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
