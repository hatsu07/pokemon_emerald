	@ data/text/trainers.inc:428 Route107_Text_DarrinDefeated (+1 aliases)
	.globl gText_Rom_25A7F7
gText_Rom_25A7F7: @ 0x0825A7F7
	.string "あはは まけた……\nまた ねますか……$"
	.if (. - gText_Rom_25A7F7) > 0x14
	.error "gText_Rom_25A7F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A7F7) < 0x14
	.space 0x14 - (. - gText_Rom_25A7F7)
	.endif
