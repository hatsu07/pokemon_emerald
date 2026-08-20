	@ data/text/trainers.inc:332 Route105_Text_BeverlyDefeated (+1 aliases)
	.globl gText_Rom_25A407
gText_Rom_25A407: @ 0x0825A407
	.string "ぷかぷか……{EOS}"
	.if (. - gText_Rom_25A407) > 0x7
	.error "gText_Rom_25A407 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A407) < 0x7
	.space 0x7 - (. - gText_Rom_25A407)
	.endif
