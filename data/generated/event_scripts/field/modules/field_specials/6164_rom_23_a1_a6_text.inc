	@ asm/field_specials.s:6373 sub_0813AD6C (+2 aliases)
	.globl gText_Rom_23A1A6
gText_Rom_23A1A6: @ 0x0823A1A6
	.string "そのターンで\nこうげき　されても\nたいりょくが1のこる"
	.byte EOS
	.if (. - gText_Rom_23A1A6) > 0x1c
	.error "gText_Rom_23A1A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A1A6) < 0x1c
	.space 0x1c - (. - gText_Rom_23A1A6)
	.endif
