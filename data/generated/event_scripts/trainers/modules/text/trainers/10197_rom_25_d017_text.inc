	@ data/text/trainers.inc:1409 Route114_Text_KaiDefeat (+1 aliases)
	.globl gText_Rom_25D017
gText_Rom_25D017: @ 0x0825D017
	.string "あれー\nおおきさで まけたんかな{EOS}"
	.if (. - gText_Rom_25D017) > 0x11
	.error "gText_Rom_25D017 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D017) < 0x11
	.space 0x11 - (. - gText_Rom_25D017)
	.endif
