	@ asm/contest.s:1562 sub_080D7B68
	.globl gText_Rom_24B32D
gText_Rom_24B32D: @ 0x0824B32D
	.string "かいめの　アピール！\nしかし　さんか　できない！{EOS}"
	.if (. - gText_Rom_24B32D) > 0x19
	.error "gText_Rom_24B32D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B32D) < 0x19
	.space 0x19 - (. - gText_Rom_24B32D)
	.endif
