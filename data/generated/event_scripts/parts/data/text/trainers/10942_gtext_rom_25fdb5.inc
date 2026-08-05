	@ data/text/trainers.inc:2498 Route123_Text_FernandoIntro (+1 aliases)
	.globl gText_Rom_25FDB5
gText_Rom_25FDB5: @ 0x0825FDB5
	.string "いっきょく かなでる あいだに\nパッと たおしちゃうゼ!$"
	.if (. - gText_Rom_25FDB5) > 0x1d
	.error "gText_Rom_25FDB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FDB5) < 0x1d
	.space 0x1d - (. - gText_Rom_25FDB5)
	.endif
