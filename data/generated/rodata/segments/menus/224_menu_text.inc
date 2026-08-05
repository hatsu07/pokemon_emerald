	@ src/option_menu.c:75 gText_Option (+2 aliases)
	.globl gText_Rom_5CADCB
gText_Rom_5CADCB: @ 0x085CADCB
	.string "せってい$"
	.if (. - gText_Rom_5CADCB) > 0x5
	.error "gText_Rom_5CADCB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADCB) < 0x5
	.space 0x5 - (. - gText_Rom_5CADCB)
	.endif
	.globl gUnknown_85CADD0
gUnknown_85CADD0: @ 0x085CADD0

	@ src/data/info_viewer.h:120 sInfoText_ChoiceClose (+4 aliases)
	.globl gText_Rom_5CADD0
gText_Rom_5CADD0: @ 0x085CADD0
	.string "とじる$"
	.if (. - gText_Rom_5CADD0) > 0x4
	.error "gText_Rom_5CADD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADD0) < 0x4
	.space 0x4 - (. - gText_Rom_5CADD0)
	.endif
	@ Decoded text from ROM range: offset=0x5CADD4, size=0x5
	.string "　5BP$"

	@ src/data/script_menu.h:593 script_menu_line_593
	.globl gText_Rom_5CADD9
gText_Rom_5CADD9: @ 0x085CADD9
	.string "10BP$"
	.if (. - gText_Rom_5CADD9) > 0x5
	.error "gText_Rom_5CADD9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADD9) < 0x5
	.space 0x5 - (. - gText_Rom_5CADD9)
	.endif

	@ src/data/script_menu.h:594 script_menu_line_594
	.globl gText_Rom_5CADDE
gText_Rom_5CADDE: @ 0x085CADDE
	.string "15BP$"
	.if (. - gText_Rom_5CADDE) > 0x5
	.error "gText_Rom_5CADDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADDE) < 0x5
	.space 0x5 - (. - gText_Rom_5CADDE)
	.endif

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

