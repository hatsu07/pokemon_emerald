	@ data/text/trainers.inc:1499 Route115_Text_CyndyRematchDefeat (+1 aliases)
	.globl gText_Rom_25D3B1
gText_Rom_25D3B1: @ 0x0825D3B1
	.string "わたしは たたかえるけど\nポケモンが……$"
	.if (. - gText_Rom_25D3B1) > 0x15
	.error "gText_Rom_25D3B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D3B1) < 0x15
	.space 0x15 - (. - gText_Rom_25D3B1)
	.endif
