	@ asm/field_specials.s:6373 sub_0813AD6C (+2 aliases)
	.globl gText_Rom_23A1C2
gText_Rom_23A1C2: @ 0x0823A1C2
	.string "あいての\nほじょこうかを\nじぶんに　コピーする"
	.byte EOS
	.if (. - gText_Rom_23A1C2) > 0x18
	.error "gText_Rom_23A1C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A1C2) < 0x18
	.space 0x18 - (. - gText_Rom_23A1C2)
	.endif
