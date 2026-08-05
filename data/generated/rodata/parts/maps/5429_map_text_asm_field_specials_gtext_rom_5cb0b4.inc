	@ asm/field_specials.s:4112 sub_08139BD4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB0B4
gText_Rom_5CB0B4: @ 0x085CB0B4
	.string "ビ4かい$"
	.if (. - gText_Rom_5CB0B4) != 0x5
	.error "gText_Rom_5CB0B4 must retain its original byte length"
	.endif
