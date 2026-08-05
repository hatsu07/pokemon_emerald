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
