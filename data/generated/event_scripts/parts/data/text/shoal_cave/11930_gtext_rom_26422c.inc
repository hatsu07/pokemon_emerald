	@ data/text/shoal_cave.inc:46 ShoalCave_Text_WasShoalSaltNowNothing
	.globl gText_Rom_26422C
gText_Rom_26422C: @ 0x0826422C
	.string "あさせのしおを とった あと……\nいまは なにも ない……$"
	.if (. - gText_Rom_26422C) > 0x1e
	.error "gText_Rom_26422C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26422C) < 0x1e
	.space 0x1e - (. - gText_Rom_26422C)
	.endif
