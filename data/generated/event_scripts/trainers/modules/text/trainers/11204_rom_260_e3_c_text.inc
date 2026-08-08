	@ data/text/trainers.inc:2888 Route126_Text_SiennaPostBattle
	.globl gText_Rom_260E3C
gText_Rom_260E3C: @ 0x08260E3C
	.string "あつく なっちゃった\nちょっと もぐって こようかな$"
	.if (. - gText_Rom_260E3C) > 0x1b
	.error "gText_Rom_260E3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260E3C) < 0x1b
	.space 0x1b - (. - gText_Rom_260E3C)
	.endif
