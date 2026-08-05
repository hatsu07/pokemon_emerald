	@ data/text/trainers.inc:479 Route107_Text_LisaPostBattle
	.globl gText_Rom_25AA20
gText_Rom_25AA20: @ 0x0825AA20
	.string "ユミ『あなたは いっしょに\nうみに あそびに いくような\lおともだち いるのかしら?$"
	.if (. - gText_Rom_25AA20) > 0x2b
	.error "gText_Rom_25AA20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AA20) < 0x2b
	.space 0x2b - (. - gText_Rom_25AA20)
	.endif
