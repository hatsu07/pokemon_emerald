	@ data/text/trainers.inc:2714 Route125_Text_NolenPostBattle
	.globl gText_Rom_26074D
gText_Rom_26074D: @ 0x0826074D
	.string "くうきちゅう よりも\nすいちゅうの ほうが おとの つたわる\lスピードが はやいんだよ!$"
	.if (. - gText_Rom_26074D) > 0x2d
	.error "gText_Rom_26074D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26074D) < 0x2d
	.space 0x2d - (. - gText_Rom_26074D)
	.endif
