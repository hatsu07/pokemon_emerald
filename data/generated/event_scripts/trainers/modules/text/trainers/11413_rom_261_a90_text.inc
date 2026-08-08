	@ data/text/trainers.inc:3197 Route131_Text_TaliaDefeat (+1 aliases)
	.globl gText_Rom_261A90
gText_Rom_261A90: @ 0x08261A90
	.string "あら まけちゃったのね$"
	.if (. - gText_Rom_261A90) > 0xc
	.error "gText_Rom_261A90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261A90) < 0xc
	.space 0xc - (. - gText_Rom_261A90)
	.endif
