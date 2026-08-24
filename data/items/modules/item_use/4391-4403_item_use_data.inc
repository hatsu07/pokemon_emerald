	@ src/item_use.c:88 sText_CantDismountBike
	.globl sText_CantDismountBike
sText_CantDismountBike: @ 0x085C957F
	.string "ここでは おりられない!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - sText_CantDismountBike) > 0xf
	.error "sText_CantDismountBike may not grow beyond its original slot"
	.endif
	.if (. - sText_CantDismountBike) < 0xf
	.space 0xf - (. - sText_CantDismountBike)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085C958E: item_use.s: sub_080FE2E8
	.globl gItemUseData_085C958E
gItemUseData_085C958E: @ 0x085C958E
	@ analyzed canonical ROM range 0x085C958E-0x085C95B5
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x28 bytes=40
	.byte 0x05, 0x50, 0xAB, 0xFE, 0x6F, 0x5C, 0x7E, 0x37, 0x00, 0x1A, 0x2E, 0x19, 0x03, 0x00, 0x0C, 0x13
	.byte 0x02, 0x29, 0x40, 0xAB, 0xFB, 0x11, 0x06, 0x08, 0x16, 0x00, 0x45, 0x03, 0x39, 0x37, 0x00, 0x03
	.byte 0x1F, 0x50, 0x13, 0x29, 0xAB, 0xFC, 0x09, 0xFF

	@ src/item_use.c:90 sText_ItemFinderOnTop
	.globl sText_ItemFinderOnTop
sText_ItemFinderOnTop: @ 0x085C95B6
	.string "マシンが あしもとで\nすごく はんのう しているぞ!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - sText_ItemFinderOnTop) > 0x1d
	.error "sText_ItemFinderOnTop may not grow beyond its original slot"
	.endif
	.if (. - sText_ItemFinderOnTop) < 0x1d
	.space 0x1d - (. - sText_ItemFinderOnTop)
	.endif

	@ src/item_use.c:91 sText_ItemFinderNothing
	.globl sText_ItemFinderNothing
sText_ItemFinderNothing: @ 0x085C95D3
	.string "…… …… ふう!\n…… なんにも はんのう しない{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - sText_ItemFinderNothing) > 0x1d
	.error "sText_ItemFinderNothing may not grow beyond its original slot"
	.endif
	.if (. - sText_ItemFinderNothing) < 0x1d
	.space 0x1d - (. - sText_ItemFinderNothing)
	.endif

	@ src/item_use.c:92 sText_CoinCase
	.globl sText_CoinCase
sText_CoinCase: @ 0x085C95F0
	.string "あなたの コイン\n{STR_VAR_1}まい{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - sText_CoinCase) > 0x10
	.error "sText_CoinCase may not grow beyond its original slot"
	.endif
	.if (. - sText_CoinCase) < 0x10
	.space 0x10 - (. - sText_CoinCase)
	.endif

	@ src/item_use.c:94 sText_BootedUpTM
	.globl sText_BootedUpTM
sText_BootedUpTM: @ 0x085C9600
	.string "わざマシンを きどうした!{EOS}"
	.if (. - sText_BootedUpTM) > 0xe
	.error "sText_BootedUpTM may not grow beyond its original slot"
	.endif
	.if (. - sText_BootedUpTM) < 0xe
	.space 0xe - (. - sText_BootedUpTM)
	.endif

	@ src/item_use.c:95 sText_BootedUpHM
	.globl sText_BootedUpHM
sText_BootedUpHM: @ 0x085C960E
	.string "ひでんマシンを きどうした!{EOS}"
	.if (. - sText_BootedUpHM) > 0xf
	.error "sText_BootedUpHM may not grow beyond its original slot"
	.endif
	.if (. - sText_BootedUpHM) < 0xf
	.space 0xf - (. - sText_BootedUpHM)
	.endif

	@ src/item_use.c:96 sText_TMHMContainedVar1
	.globl sText_TMHMContainedVar1
sText_TMHMContainedVar1: @ 0x085C961D
	.string "なかには {STR_VAR_1}が\nきろくされていた!\p{STR_VAR_1}を\nポケモンに おぼえさせますか?{EOS}"
	.if (. - sText_TMHMContainedVar1) > 0x27
	.error "sText_TMHMContainedVar1 may not grow beyond its original slot"
	.endif
	.if (. - sText_TMHMContainedVar1) < 0x27
	.space 0x27 - (. - sText_TMHMContainedVar1)
	.endif
