	@ src/data/decoration/header.h:90 header_line_90 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB06F
gText_Rom_5CB06F: @ 0x085CB06F
	.string "きれいなつくえ$"
	.if (. - gText_Rom_5CB06F) != 0x8
	.error "gText_Rom_5CB06F must retain its original byte length"
	.endif
