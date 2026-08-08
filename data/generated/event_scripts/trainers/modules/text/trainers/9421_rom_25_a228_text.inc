	@ data/text/trainers.inc:287 Route104_Text_CindyRematchDefeat (+1 aliases)
	.globl gText_Rom_25A228
gText_Rom_25A228: @ 0x0825A228
	.string "あら……\nわたくし ベストを つくしましたのに……$"
	.if (. - gText_Rom_25A228) > 0x1a
	.error "gText_Rom_25A228 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A228) < 0x1a
	.space 0x1a - (. - gText_Rom_25A228)
	.endif
