	@ data/text/blend_master.inc:62 BerryBlender_Text_WhoaAwesome
	.globl gText_Rom_27495B
gText_Rom_27495B: @ 0x0827495B
	.string "すげぇー!$"
	.if (. - gText_Rom_27495B) > 0x6
	.error "gText_Rom_27495B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27495B) < 0x6
	.space 0x6 - (. - gText_Rom_27495B)
	.endif
