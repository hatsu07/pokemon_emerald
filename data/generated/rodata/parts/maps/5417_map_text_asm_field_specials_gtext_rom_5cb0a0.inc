	@ asm/field_specials.s:4112 sub_08139BD4 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB0A0
gText_Rom_5CB0A0: @ 0x085CB0A0
	.string "11かい$"
	.if (. - gText_Rom_5CB0A0) != 0x5
	.error "gText_Rom_5CB0A0 must retain its original byte length"
	.endif
