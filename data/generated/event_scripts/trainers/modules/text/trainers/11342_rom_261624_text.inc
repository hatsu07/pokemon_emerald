	@ data/text/trainers.inc:3092 Route129_Text_TishaDefeat (+1 aliases)
	.globl gText_Rom_261624
gText_Rom_261624: @ 0x08261624
	.string "あらら\nもっと のんびり したかったなあ{EOS}"
	.if (. - gText_Rom_261624) > 0x15
	.error "gText_Rom_261624 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261624) < 0x15
	.space 0x15 - (. - gText_Rom_261624)
	.endif
