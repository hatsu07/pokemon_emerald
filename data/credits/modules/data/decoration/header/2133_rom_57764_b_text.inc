	@ src/data/decoration/header.h:636 header_line_636 (+1 aliases)
	.globl gText_Rom_57764B
gText_Rom_57764B: @ 0x0857764B
	.string "テレビ{EOS}"
	.if (. - gText_Rom_57764B) > 0x4
	.error "gText_Rom_57764B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57764B) < 0x4
	.space 0x4 - (. - gText_Rom_57764B)
	.endif
