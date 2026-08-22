	@ pret/pokeemerald-jp direct xref for 0x08309BE4: trade.s: sub_0807B064
	.globl sGbaMapWireless
sGbaMapWireless: @ 0x08309BE4
	@ 64x32 regular BG tilemap, 2048 u16 entries.
	.incbin "graphics/trade/gba_map_wireless.tilemap.u16"
	.if (. - sGbaMapWireless) != 0x1000
	.error "sGbaMapWireless size mismatch"
	.endif

	.globl sGbaMapCable
sGbaMapCable: @ 0x0830ABE4
	@ 64x32 regular BG tilemap, 2048 u16 entries.
	.incbin "graphics/trade/gba_map_cable.tilemap.u16"
	.if (. - sGbaMapCable) != 0x1000
	.error "sGbaMapCable size mismatch"
	.endif

	.globl sWirelessCloseup_Map
sWirelessCloseup_Map: @ 0x0830BBE4
	@ Semantic exact-LZ Trade wireless asset.
	.incbin "build/graphics/trade_jp_wireless/crossing_highlight_wireless.bin.lz"
	.if (. - sWirelessCloseup_Map) != 0x100
	.error "sWirelessCloseup_Map compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x0830BCE4: trade.s: c3_08054588
	.globl sWirelessSignalSend_Pal
sWirelessSignalSend_Pal: @ 0x0830BCE4
	@ 16 animation frames x 16 BGR555 colors.
	@ Editable source: 16 rows; one palette frame per row.
	.incbin "build/graphics/semantic_palettes/trade/wireless_signal_send.gbapal"
	.if (. - sWirelessSignalSend_Pal) != 0x200
	.error "sWirelessSignalSend_Pal size mismatch"
	.endif
	.globl sWirelessSignalRecv_Pal
sWirelessSignalRecv_Pal: @ 0x0830BEE4
	@ 16 animation frames x 16 BGR555 colors.
	@ Editable source: 16 rows; one palette frame per row.
	.incbin "build/graphics/semantic_palettes/trade/wireless_signal_recv.gbapal"
	.if (. - sWirelessSignalRecv_Pal) != 0x200
	.error "sWirelessSignalRecv_Pal size mismatch"
	.endif
	.globl sWirelessSignalNone_Pal
sWirelessSignalNone_Pal: @ 0x0830C0E4
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	@ Static no-signal palette loaded before the wireless animation.
	@ Editable palette PNG: 1 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/trade/sWirelessSignalNone_Pal.gbapal"

	.globl sWirelessSignal_Gfx
sWirelessSignal_Gfx: @ 0x0830C104
	@ Semantic exact-LZ Trade wireless asset.
	.incbin "build/graphics/trade_jp_wireless/wireless_signal.4bpp.lz"
	.if (. - sWirelessSignal_Gfx) != 0x690
	.error "sWirelessSignal_Gfx compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x0830C794: trade.s: sub_0807B064
.globl sWirelessSignal_Tilemap
sWirelessSignal_Tilemap: @ 0x0830C794
	@ confirmed GBA LZ77 stream: compressed=0x6F2, decompressed=0x800
	@ analyzed canonical ROM range 0x0830C794-0x0830CF5B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 1 exact LZ77 asset extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/trade/wireless_signal_rom_exact.tilemap.lz"
	.byte 0x00, 0x00, 0x00, 0x01, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x04, 0x00
	.byte 0x03, 0x00, 0x08, 0x00, 0x03, 0x00, 0x0C, 0x00, 0x03, 0x00, 0x10, 0x00, 0x03, 0x00, 0x14, 0x00
	.byte 0x03, 0x00, 0x18, 0x00, 0x03, 0x00, 0x1C, 0x00, 0x03, 0x00, 0x20, 0x00, 0x03, 0x00, 0x24, 0x00
	.byte 0x03, 0x00, 0x28, 0x00, 0x03, 0x00, 0x2C, 0x00, 0x03, 0x00, 0xFD, 0xFF, 0x01, 0x00, 0x00, 0x00
	.byte 0x03, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x04, 0x00, 0x03, 0x00, 0x08, 0x00
	.byte 0x03, 0x00, 0x0C, 0x00, 0x03, 0x00, 0x10, 0x00, 0x03, 0x00, 0x14, 0x00, 0x03, 0x00, 0x18, 0x00
	.byte 0x03, 0x00, 0x1C, 0x00, 0x03, 0x00, 0x20, 0x00, 0x03, 0x00, 0x24, 0x00, 0x03, 0x00, 0x28, 0x00
	.byte 0x03, 0x00, 0x2C, 0x00, 0x03, 0x00, 0xFD, 0xFF, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0xFF, 0xFF
	.byte 0x00, 0x00, 0x90, 0xCE, 0x30, 0x08, 0xCC, 0xCE, 0x30, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01
	.byte 0x00, 0x00, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0x00, 0x00, 0x00, 0x14
	.byte 0x00, 0x00, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x14
	.byte 0x00, 0x00, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0xCF, 0x30, 0x08, 0x20, 0xCF
	.byte 0x30, 0x08, 0x30, 0xCF, 0x30, 0x08
	@ pret/pokeemerald-jp direct xref for 0x0830CF5C: trade.s: sub_0807A8AC, sub_0807ACC8
	.globl sPokeBallSpriteSheet
sPokeBallSpriteSheet: @ 0x0830CF5C
	.4byte sPokeball_Gfx
	.2byte 0x0600 @ size
	.2byte 0x15B5 @ GFX tag

	.globl sPokeBallSpritePalette
sPokeBallSpritePalette: @ 0x0830CF64
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	.4byte sPokeball_Pal
	.2byte 0x15B6 @ palette tag
	.2byte 0x0000 @ padding

	.globl sSpriteTemplate_Pokeball
sSpriteTemplate_Pokeball: @ 0x0830CF6C
	@ OAM/anims/affine data live in the still-opaque preceding Trade residual;
	@ exact JP pointers are intentionally retained for those three fields.
	rodata_sprite_template 0x15B5, 0x15B6, 0x0830CE88, 0x0830CF08, 0, 0x0830CF50, sub_0807DF94

	.globl sOamData_LinkMonGlow
sOamData_LinkMonGlow: @ 0x0830CF84
	.2byte 0x0500, 0x8000, 0x0400, 0x0000

	.globl sAnim_LinkMonGlow
sAnim_LinkMonGlow: @ 0x0830CF8C
	.2byte 0x0000, 0x00C5, 0xFFFF, 0x0000

	.globl sAnims_LinkMonGlow
sAnims_LinkMonGlow: @ 0x0830CF94
	.4byte sAnim_LinkMonGlow

	.globl sAffineAnim_LinkMonGlow
sAffineAnim_LinkMonGlow: @ 0x0830CF98
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	.2byte 0xFFF6, 0xFFF6, 0x0500, 0x0000, 0x000A, 0x000A, 0x0500, 0x0000
	.2byte 0x7FFE, 0x0000, 0x0000, 0x0000

	.globl sAffineAnims_LinkMonGlow
sAffineAnims_LinkMonGlow: @ 0x0830CFB0
	.4byte sAffineAnim_LinkMonGlow

	.globl sSpriteSheet_LinkMonGlow
sSpriteSheet_LinkMonGlow: @ 0x0830CFB4
	.4byte sLinkMonGlow_Gfx
	.2byte 0x0200 @ size
	.2byte 0x15AE @ GFX tag

	.globl sSpritePalette_LinkMon
sSpritePalette_LinkMon: @ 0x0830CFBC
	.4byte sLinkMon_Pal
	.2byte 0x15AF @ palette tag
	.2byte 0x0000 @ padding

	.globl sSpritePalette_Gba
sSpritePalette_Gba: @ 0x0830CFC4
	.4byte sGba_Pal
	.2byte 0x15B3 @ palette tag
	.2byte 0x0000 @ padding

	.globl sSpriteTemplate_LinkMonGlow
sSpriteTemplate_LinkMonGlow: @ 0x0830CFCC
	rodata_sprite_template 0x15AE, 0x15AF, sOamData_LinkMonGlow, sAnims_LinkMonGlow, 0, sAffineAnims_LinkMonGlow, sub_0807A498

	.globl sOamData_LinkMonShadow
sOamData_LinkMonShadow: @ 0x0830CFE4
	.2byte 0x8000, 0x8000, 0x0400, 0x0000

	.globl sAnim_LinkMonShadow_Big
sAnim_LinkMonShadow_Big: @ 0x0830CFEC
	.2byte 0x0000, 0x00C5, 0xFFFF, 0x0000

	.globl sAnim_LinkMonShadow_Small
sAnim_LinkMonShadow_Small: @ 0x0830CFF4
	.2byte 0x0008, 0x00C5, 0xFFFF, 0x0000

	.globl sAnims_LinkMonShadow
sAnims_LinkMonShadow: @ 0x0830CFFC
	.4byte sAnim_LinkMonShadow_Big
	.4byte sAnim_LinkMonShadow_Small

	.globl sSpriteSheet_LinkMonShadow
sSpriteSheet_LinkMonShadow: @ 0x0830D004
	.4byte sLinkMonShadow_Gfx
	.2byte 0x0300 @ size
	.2byte 0x15B0 @ GFX tag

	.globl sSpriteTemplate_LinkMonShadow
sSpriteTemplate_LinkMonShadow: @ 0x0830D00C
	rodata_sprite_template 0x15B0, 0x15AF, sOamData_LinkMonShadow, sAnims_LinkMonShadow, 0, gDummySpriteAffineAnimTable, sub_0807A4EC

	.globl sOamData_CableEnd
sOamData_CableEnd: @ 0x0830D024
	.2byte 0x8000, 0x8000, 0x0400, 0x0000

	.globl sAnim_CableEnd
sAnim_CableEnd: @ 0x0830D02C
	.2byte 0x0000, 0x000A, 0xFFFF, 0x0000

	.globl sAnims_CableEnd
sAnims_CableEnd: @ 0x0830D034
	.4byte sAnim_CableEnd

	.globl sSpriteSheet_CableEnd
sSpriteSheet_CableEnd: @ 0x0830D038
	.4byte sLinkMonShadow_Gfx + 0x200 @ exact JP cable-end sheet data pointer
	.2byte 0x0100 @ size
	.2byte 0x15B2 @ GFX tag

	.globl sSpriteTemplate_CableEnd
sSpriteTemplate_CableEnd: @ 0x0830D040
	rodata_sprite_template 0x15B2, 0x15B3, sOamData_CableEnd, sAnims_CableEnd, 0, gDummySpriteAffineAnimTable, sub_0807A52C

	.globl sOamData_GbaScreen
sOamData_GbaScreen: @ 0x0830D058
	.2byte 0x4000, 0xC000, 0x0400, 0x0000

	.globl sAnim_GbaScreen_Long
sAnim_GbaScreen_Long: @ 0x0830D060
	.2byte 0x0000, 0x00C2, 0x0020, 0x00C2, 0x0040, 0x00C2, 0x0060, 0x00C2
	.2byte 0x0040, 0x00C2, 0x0020, 0x00C2, 0x0000, 0x00C2, 0xFFFD, 0x0008
	.2byte 0xFFFF, 0x0000

	.globl sAnim_GbaScreen_Short
sAnim_GbaScreen_Short: @ 0x0830D084
	.2byte 0x0000, 0x00C2, 0x0020, 0x00C2, 0x0040, 0x00C2, 0x0060, 0x00C2
	.2byte 0x0040, 0x00C2, 0x0020, 0x00C2, 0x0000, 0x00C2, 0xFFFD, 0x0002
	.2byte 0xFFFF, 0x0000

	.globl sAnims_GbaScreen_Long
sAnims_GbaScreen_Long: @ 0x0830D0A8
	.4byte sAnim_GbaScreen_Long

	.globl sAnims_GbaScreen_Short
sAnims_GbaScreen_Short: @ 0x0830D0AC
	.4byte sAnim_GbaScreen_Short

	.globl sSpriteSheet_GbaScreen
sSpriteSheet_GbaScreen: @ 0x0830D0B0
	.4byte sGbaScreen_Gfx
	.2byte 0x1000 @ size
	.2byte 0x15B4 @ GFX tag

	.globl sSpriteTemplate_GbaScreenFlash_Long
sSpriteTemplate_GbaScreenFlash_Long: @ 0x0830D0B8
	@ Canonical trade GBA-screen flash sprite template using sAnims_GbaScreen_Long.
	rodata_sprite_template 0x15B4, 0x15B3, sOamData_GbaScreen, sAnims_GbaScreen_Long, 0, gDummySpriteAffineAnimTable, sub_0807A574
	@ pret/pokeemerald-jp direct xref for 0x0830D0D0: trade.s: sub_0807CA00
	.globl sSpriteTemplate_GbaScreenFlash_Short
sSpriteTemplate_GbaScreenFlash_Short: @ 0x0830D0D0
	@ Canonical trade GBA-screen flash sprite template using sAnims_GbaScreen_Short.
	rodata_sprite_template 0x15B4, 0x15B3, sOamData_GbaScreen, sAnims_GbaScreen_Short, 0, gDummySpriteAffineAnimTable, sub_0807A574
	@ pret/pokeemerald-jp direct xref for 0x0830D0E8: trade.s: sub_0807A4EC
	.globl sLinkMonShadow_Pal
sLinkMonShadow_Pal: @ 0x0830D0E8
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	@ 12 palette colors stepped one at a time by sub_0807A4EC.
	.2byte 0x7F12, 0x7F12, 0x7F12, 0x7FFF, 0x7FFF, 0x7FFF, 0x7F12, 0x7F12
	.2byte 0x7F12, 0x7FFF, 0x7FFF, 0x7FFF

	.globl sAffineAnim_CrossingMonPic
sAffineAnim_CrossingMonPic: @ 0x0830D100
	@ ANALYSIS: SEMANTIC_NUMERIC_AFFINE_ANIMATION_TABLE
	.2byte 0xFF00, 0x0100, 0x0000, 0x0000, 0x7FFE, 0x0000, 0x0000, 0x0000

	.globl sAffineAnims_CrossingMonPics
sAffineAnims_CrossingMonPics: @ 0x0830D110
	.4byte sAffineAnim_CrossingMonPic

	.globl sIngameTrades
sIngameTrades: @ 0x0830D114
	@ ANALYSIS: SEMANTIC_NUMERIC_INGAME_TRADE_TABLE
	@ Four JP InGameTrade records, stride 0x3C.
	@ trade 0
	@ JP InGameTrade semantic helpers.
	@ The JP ROM stores both nickname and OT name in 11-byte buffers.
	.set JP_TRADE_ABILITY_SLOT_1, 0
	.set JP_TRADE_ABILITY_SLOT_2, 1
	.set JP_TRADE_OT_GENDER_MALE, 0
	.set JP_TRADE_OT_GENDER_FEMALE, 1
	.set JP_TRADE_MAIL_NONE, 0xFF
	.set JP_TRADE_SPECIES_0034, 0x0034
	.set JP_TRADE_SPECIES_0074, 0x0074
	.set JP_TRADE_SPECIES_012A, 0x012A
	.set JP_TRADE_SPECIES_013B, 0x013B
	.set JP_TRADE_SPECIES_0161, 0x0161
	.set JP_TRADE_SPECIES_0182, 0x0182
	.set JP_TRADE_SPECIES_0188, 0x0188
	.set JP_TRADE_SPECIES_018B, 0x018B
	.set JP_TRADE_ITEM_007D, 0x007D
	.set JP_TRADE_ITEM_007E, 0x007E
	.set JP_TRADE_ITEM_0084, 0x0084
	.set JP_TRADE_ITEM_0086, 0x0086

	.macro jp_trade_ivs hp, attack, defense, speed, sp_attack, sp_defense
		.byte \hp, \attack, \defense, \speed, \sp_attack, \sp_defense
	.endm

	.macro jp_trade_conditions cool, beauty, cute, smart, tough
		.byte \cool, \beauty, \cute, \smart, \tough
	.endm

	@ trade 0 / JP struct InGameTrade (0x3C bytes)
	.byte 0x5E, 0x98, 0x7E, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 @ nickname[11], JP encoded
	.byte 0 @ align species
	.2byte JP_TRADE_SPECIES_012A @ species
	jp_trade_ivs 5, 4, 5, 4, 4, 4
	.byte JP_TRADE_ABILITY_SLOT_2 @ abilityNum
	.byte 0, 0, 0 @ align otId
	.4byte 0x00009746 @ otId
	jp_trade_conditions 30, 5, 5, 5, 5
	.byte 0, 0, 0 @ align personality
	.4byte 0x00000084 @ personality
	.2byte JP_TRADE_ITEM_0086 @ heldItem
	.byte JP_TRADE_MAIL_NONE @ mailNum
	.byte 0x6F, 0xA0, 0x61, 0x84, 0x7E, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00 @ JP OT name storage[11]
	.byte JP_TRADE_OT_GENDER_MALE @ otGender
	.byte 10 @ sheen
	.2byte JP_TRADE_SPECIES_0188 @ requestedSpecies
	.byte 0, 0 @ struct trailing alignment

	@ trade 1 / JP struct InGameTrade (0x3C bytes)
	.byte 0x9D, 0x77, 0x9D, 0x77, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 @ nickname[11], JP encoded
	.byte 0 @ align species
	.2byte JP_TRADE_SPECIES_0161 @ species
	jp_trade_ivs 4, 4, 4, 5, 5, 4
	.byte JP_TRADE_ABILITY_SLOT_1 @ abilityNum
	.byte 0, 0, 0 @ align otId
	.4byte 0x0001210C @ otId
	jp_trade_conditions 5, 5, 30, 5, 5
	.byte 0, 0, 0 @ align personality
	.4byte 0x0000006F @ personality
	.2byte JP_TRADE_ITEM_007D @ heldItem
	.byte 0 @ mailNum
	.byte 0x51, 0xA0, 0x57, 0xAE, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 @ JP OT name storage[11]
	.byte JP_TRADE_OT_GENDER_MALE @ otGender
	.byte 10 @ sheen
	.2byte JP_TRADE_SPECIES_0182 @ requestedSpecies
	.byte 0, 0 @ struct trailing alignment

	@ trade 2 / JP struct InGameTrade (0x3C bytes)
	.byte 0x8B, 0x7B, 0xAE, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 @ nickname[11], JP encoded
	.byte 0 @ align species
	.2byte JP_TRADE_SPECIES_0074 @ species
	jp_trade_ivs 5, 4, 4, 4, 5, 4
	.byte JP_TRADE_ABILITY_SLOT_1 @ abilityNum
	.byte 0, 0, 0 @ align otId
	.4byte 0x0000B4CD @ otId
	jp_trade_conditions 5, 5, 5, 5, 30
	.byte 0, 0, 0 @ align personality
	.4byte 0x0000007F @ personality
	.2byte JP_TRADE_ITEM_007E @ heldItem
	.byte 1 @ mailNum
	.byte 0x5F, 0x87, 0x61, 0x7E, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 @ JP OT name storage[11]
	.byte JP_TRADE_OT_GENDER_MALE @ otGender
	.byte 10 @ sheen
	.2byte JP_TRADE_SPECIES_018B @ requestedSpecies
	.byte 0, 0 @ struct trailing alignment

	@ trade 3 / JP struct InGameTrade (0x3C bytes)
	.byte 0x61, 0xAE, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 @ nickname[11], JP encoded
	.byte 0 @ align species
	.2byte JP_TRADE_SPECIES_0034 @ species
	jp_trade_ivs 4, 5, 4, 5, 4, 4
	.byte JP_TRADE_ABILITY_SLOT_1 @ abilityNum
	.byte 0, 0, 0 @ align otId
	.4byte 0x00016559 @ otId
	jp_trade_conditions 5, 5, 5, 30, 5
	.byte 0, 0, 0 @ align personality
	.4byte 0x0000008B @ personality
	.2byte JP_TRADE_ITEM_0084 @ heldItem
	.byte 2 @ mailNum
	.byte 0x6F, 0x78, 0xA0, 0x9E, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 @ JP OT name storage[11]
	.byte JP_TRADE_OT_GENDER_FEMALE @ otGender
	.byte 10 @ sheen
	.2byte JP_TRADE_SPECIES_013B @ requestedSpecies
	.byte 0, 0 @ struct trailing alignment


	.globl sIngameTradeMail
sIngameTradeMail: @ 0x0830D204
	@ Three mail Easy Chat records, 10 u16 words (0x14 bytes) each.
	@ mail 0
	.2byte 0x0161, 0x0829, 0x1033, 0x0182, 0x1034, 0x270E, 0x140C, 0x1239, 0x081A, 0x0000
	@ mail 1
	.2byte 0x018B, 0x1619, 0x1042, 0x2A74, 0x0E29, 0x180F, 0x140C, 0x1621, 0x1032, 0x0000
	@ mail 2
	.2byte 0x013B, 0x0800, 0x0C01, 0x2A34, 0x1034, 0x262D, 0x1421, 0x0418, 0x103E, 0x0000

	.globl gText_Rom_30D240
