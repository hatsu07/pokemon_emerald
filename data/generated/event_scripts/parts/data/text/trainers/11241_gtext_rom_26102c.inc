	@ data/text/trainers.inc:2942 Route127_Text_AidanPostBattle
	.globl gText_Rom_26102C
gText_Rom_26102C: @ 0x0826102C
	.string "この ちかくには いっぱい\nもぐれそうな ところが あるな!\pそらから みてると\nうみの いろが ちがうから よくわかる!$"
	.if (. - gText_Rom_26102C) > 0x3e
	.error "gText_Rom_26102C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26102C) < 0x3e
	.space 0x3e - (. - gText_Rom_26102C)
	.endif
