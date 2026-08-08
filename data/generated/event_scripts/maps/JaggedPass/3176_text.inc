	@ data/maps/JaggedPass/scripts.inc:194 JaggedPass_Text_EthanIntro (+1 aliases)
	.globl gText_Rom_215E8F
gText_Rom_215E8F: @ 0x08215E8F
	.string "この デコボコさんどうは あるきにくい!\nポケモンを きたえるのに むいてるよ!$"
	.if (. - gText_Rom_215E8F) > 0x29
	.error "gText_Rom_215E8F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215E8F) < 0x29
	.space 0x29 - (. - gText_Rom_215E8F)
	.endif
