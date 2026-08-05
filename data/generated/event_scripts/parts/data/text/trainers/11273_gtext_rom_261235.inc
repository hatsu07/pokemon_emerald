	@ data/text/trainers.inc:2990 Route128_Text_IsaiahRematchDefeat (+1 aliases)
	.globl gText_Rom_261235
gText_Rom_261235: @ 0x08261235
	.string "また はつしょうり ならず……$"
	.if (. - gText_Rom_261235) > 0x10
	.error "gText_Rom_261235 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261235) < 0x10
	.space 0x10 - (. - gText_Rom_261235)
	.endif
