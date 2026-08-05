	@ data/text/trainers.inc:470 Route107_Text_BethPostBattle
	.globl gText_Rom_25A9C4
gText_Rom_25A9C4: @ 0x0825A9C4
	.string "あなた まだまだ つよく なりそうね\nわたしも がんばろうっと!$"
	.if (. - gText_Rom_25A9C4) > 0x21
	.error "gText_Rom_25A9C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A9C4) < 0x21
	.space 0x21 - (. - gText_Rom_25A9C4)
	.endif
