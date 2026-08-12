@ Battle graphics/SFX utility healthbox sprite resources.

sSpriteSheet_SinglesPlayerHealthbox: @ 0x082FCAC8
	rodata_compressed_sprite_sheet 0x08C1F210, 0x1000, TAG_HEALTHBOX_PLAYER1_TILE @ gHealthboxSinglesPlayerGfx

sSpriteSheet_SinglesOpponentHealthbox: @ 0x082FCAD0
	rodata_compressed_sprite_sheet 0x08C1F4D0, 0x1000, TAG_HEALTHBOX_OPPONENT1_TILE @ gHealthboxSinglesOpponentGfx

sSpriteSheets_DoublesPlayerHealthbox_0: @ 0x082FCAD8
	rodata_compressed_sprite_sheet 0x08C1F660, 0x0800, TAG_HEALTHBOX_PLAYER1_TILE @ gHealthboxDoublesPlayerGfx

sSpriteSheets_DoublesPlayerHealthbox_1: @ 0x082FCAE0
	rodata_compressed_sprite_sheet 0x08C1F660, 0x0800, TAG_HEALTHBOX_PLAYER2_TILE @ gHealthboxDoublesPlayerGfx

sSpriteSheets_DoublesOpponentHealthbox_0: @ 0x082FCAE8
	rodata_compressed_sprite_sheet 0x08C1F7F8, 0x0800, TAG_HEALTHBOX_OPPONENT1_TILE @ gHealthboxDoublesOpponentGfx

sSpriteSheets_DoublesOpponentHealthbox_1: @ 0x082FCAF0
	rodata_compressed_sprite_sheet 0x08C1F7F8, 0x0800, TAG_HEALTHBOX_OPPONENT2_TILE @ gHealthboxDoublesOpponentGfx

sSpriteSheet_SafariHealthbox: @ 0x082FCAF8
	rodata_compressed_sprite_sheet 0x08C1F98C, 0x1000, TAG_HEALTHBOX_SAFARI_TILE @ gHealthboxSafariGfx

sSpriteSheets_HealthBar: @ 0x082FCB00
	rodata_compressed_sprite_sheet 0x08C02384, 0x0100, TAG_HEALTHBAR_PLAYER1_TILE @ gBlankGfxCompressed
	rodata_compressed_sprite_sheet 0x08C02384, 0x0120, TAG_HEALTHBAR_OPPONENT1_TILE @ gBlankGfxCompressed
	rodata_compressed_sprite_sheet 0x08C02384, 0x0100, TAG_HEALTHBAR_PLAYER2_TILE @ gBlankGfxCompressed
	rodata_compressed_sprite_sheet 0x08C02384, 0x0120, TAG_HEALTHBAR_OPPONENT2_TILE @ gBlankGfxCompressed

sSpritePalettes_HealthBoxHealthBar: @ 0x082FCB20
	rodata_sprite_palette 0x08C11BA4, TAG_HEALTHBOX_PAL @ gBattleInterface_BallStatusBarPal
	rodata_sprite_palette 0x08C11BC4, TAG_HEALTHBAR_PAL @ gBattleInterface_BallDisplayPal
