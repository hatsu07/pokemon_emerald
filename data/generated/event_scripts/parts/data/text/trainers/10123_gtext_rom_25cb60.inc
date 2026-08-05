	@ data/text/trainers.inc:1298 Route114_Text_LucasDefeat (+1 aliases)
	.globl gText_Rom_25CB60
gText_Rom_25CB60: @ 0x0825CB60
	.string "やまは こわい ところだ……$"
	.if (. - gText_Rom_25CB60) > 0xf
	.error "gText_Rom_25CB60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CB60) < 0xf
	.space 0xf - (. - gText_Rom_25CB60)
	.endif
