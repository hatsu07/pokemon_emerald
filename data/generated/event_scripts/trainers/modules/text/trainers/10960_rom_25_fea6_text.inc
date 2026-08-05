	@ data/text/trainers.inc:2525 Route123_Text_DavisPostBattle
	.globl gText_Rom_25FEA6
gText_Rom_25FEA6: @ 0x0825FEA6
	.string "まけちゃった こと\nぼくの おにいちゃんには ひみつ だよ!$"
	.if (. - gText_Rom_25FEA6) > 0x1f
	.error "gText_Rom_25FEA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FEA6) < 0x1f
	.space 0x1f - (. - gText_Rom_25FEA6)
	.endif
