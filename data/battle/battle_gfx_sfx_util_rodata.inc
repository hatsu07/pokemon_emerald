@ Battle graphics/SFX utility healthbox sprite resources.

	.globl gUnknown_82FCAC8
sSpriteSheet_SinglesPlayerHealthbox: @ 0x082FCAC8
gUnknown_82FCAC8:
	.4byte 0x08C1F210
	.2byte 0x1000, 0xD6FF

	.globl gUnknown_82FCAD0
sSpriteSheet_SinglesOpponentHealthbox: @ 0x082FCAD0
gUnknown_82FCAD0:
	.4byte 0x08C1F4D0
	.2byte 0x1000, 0xD701

	.globl gUnknown_82FCAD8
sSpriteSheets_DoublesPlayerHealthbox_0: @ 0x082FCAD8
gUnknown_82FCAD8:
	.4byte 0x08C1F660
	.2byte 0x0800, 0xD6FF

	.globl gUnknown_82FCAE0
sSpriteSheets_DoublesPlayerHealthbox_1: @ 0x082FCAE0
gUnknown_82FCAE0:
	.4byte 0x08C1F660
	.2byte 0x0800, 0xD700

	.globl gUnknown_82FCAE8
sSpriteSheets_DoublesOpponentHealthbox_0: @ 0x082FCAE8
gUnknown_82FCAE8:
	.4byte 0x08C1F7F8
	.2byte 0x0800, 0xD701

	.globl gUnknown_82FCAF0
sSpriteSheets_DoublesOpponentHealthbox_1: @ 0x082FCAF0
gUnknown_82FCAF0:
	.4byte 0x08C1F7F8
	.2byte 0x0800, 0xD702

	.globl gUnknown_82FCAF8
sSpriteSheet_SafariHealthbox: @ 0x082FCAF8
gUnknown_82FCAF8:
	.4byte 0x08C1F98C
	.2byte 0x1000, 0xD70B

	.globl gUnknown_82FCB00
sSpriteSheets_HealthBar: @ 0x082FCB00
gUnknown_82FCB00:
	.4byte 0x08C02384
	.2byte 0x0100, 0xD704 @ 0
	.4byte 0x08C02384
	.2byte 0x0120, 0xD705 @ 1
	.4byte 0x08C02384
	.2byte 0x0100, 0xD706 @ 2
	.4byte 0x08C02384
	.2byte 0x0120, 0xD707 @ 3

	.globl gUnknown_82FCB20
sSpritePalettes_HealthBoxHealthBar: @ 0x082FCB20
gUnknown_82FCB20:
	.4byte 0x08C11BA4
	.2byte 0xD6FF, 0x0000 @ 0
	.4byte 0x08C11BC4
	.2byte 0xD704, 0x0000 @ 1
