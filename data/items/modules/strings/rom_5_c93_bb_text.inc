	@ src/item_menu.c:302 item_menu_line_302
	.globl gText_Rom_5C93B5
gText_Rom_5C93B5: @ 0x085C93B5
	.string "タグをみる{EOS}"
	.if (. - gText_Rom_5C93B5) > 0x6
	.error "gText_Rom_5C93B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93B5) < 0x6
	.space 0x6 - (. - gText_Rom_5C93B5)
	.endif

	@ src/strings.c:134 gMenuText_Confirm (+2 aliases)
	.globl gText_Rom_5C93BB
gText_Rom_5C93BB: @ 0x085C93BB
	.string "けってい{EOS}"
	.if (. - gText_Rom_5C93BB) > 0x5
	.error "gText_Rom_5C93BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93BB) < 0x5
	.space 0x5 - (. - gText_Rom_5C93BB)
	.endif
	@ Decoded text from ROM range: offset=0x5C93C0, size=0x4
	.string "おりる{EOS}"
