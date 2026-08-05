	@ data/text/trainers.inc:3293 Route133_Text_DebraIntro (+1 aliases)
	.globl gText_Rom_261E80
gText_Rom_261E80: @ 0x08261E80
	.string "わたしは かなしい おんな……\nながれ ながれて ここまで きたの……$"
	.if (. - gText_Rom_261E80) > 0x24
	.error "gText_Rom_261E80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261E80) < 0x24
	.space 0x24 - (. - gText_Rom_261E80)
	.endif
