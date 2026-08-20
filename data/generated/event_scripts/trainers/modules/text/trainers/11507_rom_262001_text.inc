	@ data/text/trainers.inc:3335 Route133_Text_MolliePostBattle
	.globl gText_Rom_262001
gText_Rom_262001: @ 0x08262001
	.string "わたいや じいさんのような\nたつじんを めざして がんばんなせえ{EOS}"
	.if (. - gText_Rom_262001) > 0x21
	.error "gText_Rom_262001 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262001) < 0x21
	.space 0x21 - (. - gText_Rom_262001)
	.endif
