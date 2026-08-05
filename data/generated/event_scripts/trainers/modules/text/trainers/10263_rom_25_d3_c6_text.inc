	@ data/text/trainers.inc:1502 Route115_Text_CyndyPostRematch
	.globl gText_Rom_25D3C6
gText_Rom_25D3C6: @ 0x0825D3C6
	.string "まけても ちょっと たのしいのは\nほんとうに ポケモンが すき だからかな?$"
	.if (. - gText_Rom_25D3C6) > 0x27
	.error "gText_Rom_25D3C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D3C6) < 0x27
	.space 0x27 - (. - gText_Rom_25D3C6)
	.endif
