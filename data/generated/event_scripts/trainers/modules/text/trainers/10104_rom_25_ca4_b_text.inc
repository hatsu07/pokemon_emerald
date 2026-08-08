	@ data/text/trainers.inc:1271 Route113_Text_LawrenceDefeat (+1 aliases)
	.globl gText_Rom_25CA4B
gText_Rom_25CA4B: @ 0x0825CA4B
	.string "えへへ まけちゃったね$"
	.if (. - gText_Rom_25CA4B) > 0xc
	.error "gText_Rom_25CA4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CA4B) < 0xc
	.space 0xc - (. - gText_Rom_25CA4B)
	.endif
