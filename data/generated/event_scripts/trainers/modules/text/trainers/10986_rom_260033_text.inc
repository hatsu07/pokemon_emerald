	@ data/text/trainers.inc:2564 Route123_Text_JonasIntro (+1 aliases)
	.globl gText_Rom_260033
gText_Rom_260033: @ 0x08260033
	.string "まちぶせ していたら\nトレーナーが かかったで ござる!{EOS}"
	.if (. - gText_Rom_260033) > 0x1d
	.error "gText_Rom_260033 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260033) < 0x1d
	.space 0x1d - (. - gText_Rom_260033)
	.endif
