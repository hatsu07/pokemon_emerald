	@ asm/dodrio_berry_picking.s:11294 sub_08029D28
	.globl gText_Rom_5CAAD8
gText_Rom_5CAAD8: @ 0x085CAAD8
	.string "はい$"
	.if (. - gText_Rom_5CAAD8) > 0x3
	.error "gText_Rom_5CAAD8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAAD8) < 0x3
	.space 0x3 - (. - gText_Rom_5CAAD8)
	.endif
	.globl gUnknown_85CAADB
gUnknown_85CAADB: @ 0x085CAADB

