	@ src/data/script_menu.h:256 script_menu_line_256 (+1 aliases)
	.globl gText_Rom_5CB040
gText_Rom_5CB040: @ 0x085CB040
	.string "あおいビードロ{EOS}"
	.if (. - gText_Rom_5CB040) > 0x8
	.error "gText_Rom_5CB040 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB040) < 0x8
	.space 0x8 - (. - gText_Rom_5CB040)
	.endif

	@ src/data/script_menu.h:257 script_menu_line_257 (+1 aliases)
	.globl gText_Rom_5CB048
gText_Rom_5CB048: @ 0x085CB048
	.string "きいろビードロ{EOS}"
	.if (. - gText_Rom_5CB048) > 0x8
	.error "gText_Rom_5CB048 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB048) < 0x8
	.space 0x8 - (. - gText_Rom_5CB048)
	.endif

	@ src/data/script_menu.h:258 script_menu_line_258 (+1 aliases)
	.globl gText_Rom_5CB050
gText_Rom_5CB050: @ 0x085CB050
	.string "あかいビードロ{EOS}"
	.if (. - gText_Rom_5CB050) > 0x8
	.error "gText_Rom_5CB050 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB050) < 0x8
	.space 0x8 - (. - gText_Rom_5CB050)
	.endif

	@ src/data/script_menu.h:259 script_menu_line_259 (+1 aliases)
	.globl gText_Rom_5CB058
gText_Rom_5CB058: @ 0x085CB058
	.string "しろいビードロ{EOS}"
	.if (. - gText_Rom_5CB058) > 0x8
	.error "gText_Rom_5CB058 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB058) < 0x8
	.space 0x8 - (. - gText_Rom_5CB058)
	.endif

	@ src/data/script_menu.h:260 script_menu_line_260 (+1 aliases)
	.globl gText_Rom_5CB060
gText_Rom_5CB060: @ 0x085CB060
	.string "くろいビードロ{EOS}"
	.if (. - gText_Rom_5CB060) > 0x8
	.error "gText_Rom_5CB060 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB060) < 0x8
	.space 0x8 - (. - gText_Rom_5CB060)
	.endif
