	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:224 LilycoveCity_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful
	.globl gText_Rom_206113
gText_Rom_206113: @ 0x08206113
	.string "さいきん かんちょうの ごきげんが\nとても いいみたい\pいいこと あったんだね きっと$"
	.if (. - gText_Rom_206113) > 0x2c
	.error "gText_Rom_206113 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_206113) < 0x2c
	.space 0x2c - (. - gText_Rom_206113)
	.endif
