	@ data/text/berries.inc:224 SootopolisCity_Text_OhDoesntMatter
	.globl gText_Rom_26404E
gText_Rom_26404E: @ 0x0826404E
	.string "そっか…\nかんけいないのか…\pしりたいことって たくさんあるなー$"
	.if (. - gText_Rom_26404E) > 0x21
	.error "gText_Rom_26404E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26404E) < 0x21
	.space 0x21 - (. - gText_Rom_26404E)
	.endif
