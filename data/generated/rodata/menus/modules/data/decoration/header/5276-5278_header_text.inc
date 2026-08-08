	@ src/data/decoration/header.h:440 header_line_440 (+1 aliases)
	.globl gText_Rom_5CADE3
gText_Rom_5CADE3: @ 0x085CADE3
	.string "あかいテント$"
	.if (. - gText_Rom_5CADE3) > 0x7
	.error "gText_Rom_5CADE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADE3) < 0x7
	.space 0x7 - (. - gText_Rom_5CADE3)
	.endif

	@ src/data/decoration/header.h:454 header_line_454 (+1 aliases)
	.globl gText_Rom_5CADEA
gText_Rom_5CADEA: @ 0x085CADEA
	.string "あおいテント$"
	.if (. - gText_Rom_5CADEA) > 0x7
	.error "gText_Rom_5CADEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADEA) < 0x7
	.space 0x7 - (. - gText_Rom_5CADEA)
	.endif

