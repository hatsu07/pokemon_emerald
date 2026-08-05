	@ data/maps/Route116/scripts.inc:359 Route116_Text_WantToDigTunnel
	.globl gText_Rom_1EBFAA
gText_Rom_1EBFAA: @ 0x081EBFAA
	.string "ぬぉー!!\pトンネル ほりてー!!$"
	.if (. - gText_Rom_1EBFAA) > 0x12
	.error "gText_Rom_1EBFAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EBFAA) < 0x12
	.space 0x12 - (. - gText_Rom_1EBFAA)
	.endif
