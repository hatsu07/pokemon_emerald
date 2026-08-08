@ Battle graphics/SFX utility healthbox sprite resources.

	.globl gUnknown_82FCAC8
sSpriteSheet_SinglesPlayerHealthbox: @ 0x082FCAC8
gUnknown_82FCAC8:
	rodata_compressed_sprite_sheet 0x08C1F210, 0x1000, TAG_HEALTHBOX_PLAYER1_TILE @ gHealthboxSinglesPlayerGfx

	.globl gUnknown_82FCAD0
sSpriteSheet_SinglesOpponentHealthbox: @ 0x082FCAD0
gUnknown_82FCAD0:
	rodata_compressed_sprite_sheet 0x08C1F4D0, 0x1000, TAG_HEALTHBOX_OPPONENT1_TILE @ gHealthboxSinglesOpponentGfx

	.globl gUnknown_82FCAD8
sSpriteSheets_DoublesPlayerHealthbox_0: @ 0x082FCAD8
gUnknown_82FCAD8:
	rodata_compressed_sprite_sheet 0x08C1F660, 0x0800, TAG_HEALTHBOX_PLAYER1_TILE @ gHealthboxDoublesPlayerGfx

	.globl gUnknown_82FCAE0
sSpriteSheets_DoublesPlayerHealthbox_1: @ 0x082FCAE0
gUnknown_82FCAE0:
	rodata_compressed_sprite_sheet 0x08C1F660, 0x0800, TAG_HEALTHBOX_PLAYER2_TILE @ gHealthboxDoublesPlayerGfx

	.globl gUnknown_82FCAE8
sSpriteSheets_DoublesOpponentHealthbox_0: @ 0x082FCAE8
gUnknown_82FCAE8:
	rodata_compressed_sprite_sheet 0x08C1F7F8, 0x0800, TAG_HEALTHBOX_OPPONENT1_TILE @ gHealthboxDoublesOpponentGfx

	.globl gUnknown_82FCAF0
sSpriteSheets_DoublesOpponentHealthbox_1: @ 0x082FCAF0
gUnknown_82FCAF0:
	rodata_compressed_sprite_sheet 0x08C1F7F8, 0x0800, TAG_HEALTHBOX_OPPONENT2_TILE @ gHealthboxDoublesOpponentGfx

	.globl gUnknown_82FCAF8
sSpriteSheet_SafariHealthbox: @ 0x082FCAF8
gUnknown_82FCAF8:
	rodata_compressed_sprite_sheet 0x08C1F98C, 0x1000, TAG_HEALTHBOX_SAFARI_TILE @ gHealthboxSafariGfx

	.globl gUnknown_82FCB00
sSpriteSheets_HealthBar: @ 0x082FCB00
gUnknown_82FCB00:
	rodata_compressed_sprite_sheet 0x08C02384, 0x0100, TAG_HEALTHBAR_PLAYER1_TILE @ gBlankGfxCompressed
	rodata_compressed_sprite_sheet 0x08C02384, 0x0120, TAG_HEALTHBAR_OPPONENT1_TILE @ gBlankGfxCompressed
	rodata_compressed_sprite_sheet 0x08C02384, 0x0100, TAG_HEALTHBAR_PLAYER2_TILE @ gBlankGfxCompressed
	rodata_compressed_sprite_sheet 0x08C02384, 0x0120, TAG_HEALTHBAR_OPPONENT2_TILE @ gBlankGfxCompressed

	.globl gUnknown_82FCB20
sSpritePalettes_HealthBoxHealthBar: @ 0x082FCB20
gUnknown_82FCB20:
	rodata_sprite_palette 0x08C11BA4, TAG_HEALTHBOX_PAL @ gBattleInterface_BallStatusBarPal
	rodata_sprite_palette 0x08C11BC4, TAG_HEALTHBAR_PAL @ gBattleInterface_BallDisplayPal
