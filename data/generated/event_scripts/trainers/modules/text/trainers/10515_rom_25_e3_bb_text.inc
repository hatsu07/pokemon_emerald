	@ data/text/trainers.inc:1865 Route118_Text_RoseRematchDefeat (+1 aliases)
	.globl gText_Rom_25E3BB
gText_Rom_25E3BB: @ 0x0825E3BB
	.string "においの こうか……\nあんまり きかなかったわね$"
	.if (. - gText_Rom_25E3BB) > 0x19
	.error "gText_Rom_25E3BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E3BB) < 0x19
	.space 0x19 - (. - gText_Rom_25E3BB)
	.endif
