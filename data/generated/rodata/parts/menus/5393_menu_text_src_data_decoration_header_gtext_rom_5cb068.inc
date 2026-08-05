	@ src/data/decoration/header.h:188 header_line_188 (+1 aliases)
	.globl gText_Rom_5CB068
gText_Rom_5CB068: @ 0x085CB068
	.string "きれいなイス$"
	.if (. - gText_Rom_5CB068) > 0x7
	.error "gText_Rom_5CB068 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB068) < 0x7
	.space 0x7 - (. - gText_Rom_5CB068)
	.endif
