	@ data/text/trainers.inc:1403 Route114_Text_IvyNotEnoughMons (+1 aliases)
	.globl gText_Rom_25CFDE
gText_Rom_25CFDE: @ 0x0825CFDE
	.string "イヨ『ポケモン いっぴき だけなの?\nなんだか さみしい かんじ しちゃうね$"
	.if (. - gText_Rom_25CFDE) > 0x27
	.error "gText_Rom_25CFDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CFDE) < 0x27
	.space 0x27 - (. - gText_Rom_25CFDE)
	.endif
