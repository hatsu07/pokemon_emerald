	@ src/item_use.c:88 sText_CantDismountBike
	.globl gText_Rom_5C957F
gText_Rom_5C957F: @ 0x085C957F
	.string "ここでは おりられない!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C957F) > 0xf
	.error "gText_Rom_5C957F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C957F) < 0xf
	.space 0xf - (. - gText_Rom_5C957F)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085C958E: item_use.s: sub_080FE2E8
	.globl gItemUseData_085C958E
gItemUseData_085C958E:
	.globl gUnknown_85C958E
gUnknown_85C958E: @ 0x085C958E
	@ analyzed canonical ROM range 0x085C958E-0x085C95B5
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x28
	.byte 0x05, 0x50, 0xAB, 0xFE, 0x6F, 0x5C, 0x7E, 0x37, 0x00, 0x1A, 0x2E, 0x19, 0x03, 0x00, 0x0C, 0x13
	.byte 0x02, 0x29, 0x40, 0xAB, 0xFB, 0x11, 0x06, 0x08, 0x16, 0x00, 0x45, 0x03, 0x39, 0x37, 0x00, 0x03
	.byte 0x1F, 0x50, 0x13, 0x29, 0xAB, 0xFC, 0x09, 0xFF
	.globl gUnknown_85C95B6
gUnknown_85C95B6: @ 0x085C95B6

	@ src/item_use.c:90 sText_ItemFinderOnTop
	.globl gText_Rom_5C95B6
gText_Rom_5C95B6: @ 0x085C95B6
	.string "マシンが あしもとで\nすごく はんのう しているぞ!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C95B6) > 0x1d
	.error "gText_Rom_5C95B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C95B6) < 0x1d
	.space 0x1d - (. - gText_Rom_5C95B6)
	.endif
	.globl gUnknown_85C95D3
gUnknown_85C95D3: @ 0x085C95D3

	@ src/item_use.c:91 sText_ItemFinderNothing
	.globl gText_Rom_5C95D3
gText_Rom_5C95D3: @ 0x085C95D3
	.string "…… …… ふう!\n…… なんにも はんのう しない{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C95D3) > 0x1d
	.error "gText_Rom_5C95D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C95D3) < 0x1d
	.space 0x1d - (. - gText_Rom_5C95D3)
	.endif
	.globl gUnknown_85C95F0
gUnknown_85C95F0: @ 0x085C95F0

	@ src/item_use.c:92 sText_CoinCase
	.globl gText_Rom_5C95F0
gText_Rom_5C95F0: @ 0x085C95F0
	.string "あなたの コイン\n{STR_VAR_1}まい{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C95F0) > 0x10
	.error "gText_Rom_5C95F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C95F0) < 0x10
	.space 0x10 - (. - gText_Rom_5C95F0)
	.endif
	.globl gUnknown_85C9600
gUnknown_85C9600: @ 0x085C9600

	@ src/item_use.c:94 sText_BootedUpTM
	.globl gText_Rom_5C9600
gText_Rom_5C9600: @ 0x085C9600
	.string "わざマシンを きどうした!$"
	.if (. - gText_Rom_5C9600) > 0xe
	.error "gText_Rom_5C9600 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9600) < 0xe
	.space 0xe - (. - gText_Rom_5C9600)
	.endif
	.globl gUnknown_85C960E
gUnknown_85C960E: @ 0x085C960E

	@ src/item_use.c:95 sText_BootedUpHM
	.globl gText_Rom_5C960E
gText_Rom_5C960E: @ 0x085C960E
	.string "ひでんマシンを きどうした!$"
	.if (. - gText_Rom_5C960E) > 0xf
	.error "gText_Rom_5C960E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C960E) < 0xf
	.space 0xf - (. - gText_Rom_5C960E)
	.endif
	.globl gUnknown_85C961D
gUnknown_85C961D: @ 0x085C961D

	@ src/item_use.c:96 sText_TMHMContainedVar1
	.globl gText_Rom_5C961D
gText_Rom_5C961D: @ 0x085C961D
	.string "なかには {STR_VAR_1}が\nきろくされていた!\p{STR_VAR_1}を\nポケモンに おぼえさせますか?$"
	.if (. - gText_Rom_5C961D) > 0x27
	.error "gText_Rom_5C961D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C961D) < 0x27
	.space 0x27 - (. - gText_Rom_5C961D)
	.endif
