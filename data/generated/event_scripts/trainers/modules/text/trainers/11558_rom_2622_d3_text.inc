	@ data/text/trainers.inc:3410 Route134_Text_ReynaIntro (+1 aliases)
	.globl gText_Rom_2622D3
gText_Rom_2622D3: @ 0x082622D3
	.string "あたいの ポケモンは\nちょっとや そっとじゃ たおせないよ!$"
	.if (. - gText_Rom_2622D3) > 0x1f
	.error "gText_Rom_2622D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2622D3) < 0x1f
	.space 0x1f - (. - gText_Rom_2622D3)
	.endif
