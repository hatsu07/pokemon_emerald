	@ data/text/trainers.inc:467 Route107_Text_BethDefeated (+1 aliases)
	.globl gText_Rom_25A9B0
gText_Rom_25A9B0: @ 0x0825A9B0
	.string "わたしじゃ あいてに ならなかったわ!$"
	.if (. - gText_Rom_25A9B0) > 0x14
	.error "gText_Rom_25A9B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A9B0) < 0x14
	.space 0x14 - (. - gText_Rom_25A9B0)
	.endif
