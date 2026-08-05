	@ data/text/trainers.inc:43 Route102_Text_TianaIntro (+1 aliases)
	.globl gText_Rom_2596DA
gText_Rom_2596DA: @ 0x082596DA
	.string "わたしは どんどん かちぬいて\nさいきょうの トレーナーを めざすのよ!\pあなたも きょうりょく してね!"
	.byte EOS
	.if (. - gText_Rom_2596DA) > 0x36
	.error "gText_Rom_2596DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2596DA) < 0x36
	.space 0x36 - (. - gText_Rom_2596DA)
	.endif
