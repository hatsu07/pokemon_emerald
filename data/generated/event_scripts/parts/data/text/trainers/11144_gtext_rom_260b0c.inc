	@ data/text/trainers.inc:2798 Route125_Text_AuronIntro (+1 aliases)
	.globl gText_Rom_260B0C
gText_Rom_260B0C: @ 0x08260B0C
	.string "こらーッ! おぬしかッ\nうみに ゴミを すてたのは!$"
	.if (. - gText_Rom_260B0C) > 0x1b
	.error "gText_Rom_260B0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260B0C) < 0x1b
	.space 0x1b - (. - gText_Rom_260B0C)
	.endif
