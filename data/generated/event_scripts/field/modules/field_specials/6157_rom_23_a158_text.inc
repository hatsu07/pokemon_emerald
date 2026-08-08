	@ asm/field_specials.s:6373 sub_0813AD6C (+2 aliases)
	.globl gText_Rom_23A158
gText_Rom_23A158: @ 0x0823A158
	.string "ドロを　かけて\nめいちゅうりつを\nさげる"
	.byte EOS
	.if (. - gText_Rom_23A158) > 0x15
	.error "gText_Rom_23A158 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A158) < 0x15
	.space 0x15 - (. - gText_Rom_23A158)
	.endif
