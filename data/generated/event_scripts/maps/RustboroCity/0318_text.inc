	@ data/maps/RustboroCity/scripts.inc:1284 RustboroCity_Text_IdBetterGetBackToWork
	.globl gText_Rom_1DFD3B
gText_Rom_1DFD3B: @ 0x081DFD3B
	.string "……では わたしは しごとに もどります\p{PLAYER}さん おきをつけて!{EOS}"
	.if (. - gText_Rom_1DFD3B) > 0x22
	.error "gText_Rom_1DFD3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFD3B) < 0x22
	.space 0x22 - (. - gText_Rom_1DFD3B)
	.endif
