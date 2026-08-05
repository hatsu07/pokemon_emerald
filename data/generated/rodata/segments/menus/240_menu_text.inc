	@ src/data/script_menu.h:256 script_menu_line_256 (+1 aliases)
	.globl gText_Rom_5CB040
gText_Rom_5CB040: @ 0x085CB040
	.string "あおいビードロ$"
	.if (. - gText_Rom_5CB040) > 0x8
	.error "gText_Rom_5CB040 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB040) < 0x8
	.space 0x8 - (. - gText_Rom_5CB040)
	.endif

	@ src/data/script_menu.h:257 script_menu_line_257 (+1 aliases)
	.globl gText_Rom_5CB048
gText_Rom_5CB048: @ 0x085CB048
	.string "きいろビードロ$"
	.if (. - gText_Rom_5CB048) > 0x8
	.error "gText_Rom_5CB048 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB048) < 0x8
	.space 0x8 - (. - gText_Rom_5CB048)
	.endif

	@ src/data/script_menu.h:258 script_menu_line_258 (+1 aliases)
	.globl gText_Rom_5CB050
gText_Rom_5CB050: @ 0x085CB050
	.string "あかいビードロ$"
	.if (. - gText_Rom_5CB050) > 0x8
	.error "gText_Rom_5CB050 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB050) < 0x8
	.space 0x8 - (. - gText_Rom_5CB050)
	.endif

	@ src/data/script_menu.h:259 script_menu_line_259 (+1 aliases)
	.globl gText_Rom_5CB058
gText_Rom_5CB058: @ 0x085CB058
	.string "しろいビードロ$"
	.if (. - gText_Rom_5CB058) > 0x8
	.error "gText_Rom_5CB058 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB058) < 0x8
	.space 0x8 - (. - gText_Rom_5CB058)
	.endif

	@ src/data/script_menu.h:260 script_menu_line_260 (+1 aliases)
	.globl gText_Rom_5CB060
gText_Rom_5CB060: @ 0x085CB060
	.string "くろいビードロ$"
	.if (. - gText_Rom_5CB060) > 0x8
	.error "gText_Rom_5CB060 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB060) < 0x8
	.space 0x8 - (. - gText_Rom_5CB060)
	.endif

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

	@ src/data/decoration/header.h:90 header_line_90 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CB06F
gText_Rom_5CB06F: @ 0x085CB06F
	.string "きれいなつくえ$"
	.if (. - gText_Rom_5CB06F) != 0x8
	.error "gText_Rom_5CB06F must retain its original byte length"
	.endif
	.globl gText_Rom_5CB073
	.set gText_Rom_5CB073, gText_Rom_5CB06F + 0x4

