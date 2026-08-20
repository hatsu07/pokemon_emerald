	@ src/data/party_menu.h:804 party_menu_line_804
	.globl gText_Rom_5C9AD0
gText_Rom_5C9AD0: @ 0x085C9AD0
	.string "メールを とる{EOS}"
	.if (. - gText_Rom_5C9AD0) > 0x8
	.error "gText_Rom_5C9AD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9AD0) < 0x8
	.space 0x8 - (. - gText_Rom_5C9AD0)
	.endif

	@ src/data/party_menu.h:805 party_menu_line_805
	.globl gText_Rom_5C9AD8
gText_Rom_5C9AD8: @ 0x085C9AD8
	.string "メールを よむ{EOS}"
	.if (. - gText_Rom_5C9AD8) > 0x8
	.error "gText_Rom_5C9AD8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9AD8) < 0x8
	.space 0x8 - (. - gText_Rom_5C9AD8)
	.endif
	@ Decoded text from ROM range: offset=0x5C9AE0, size=0x7
	.string "こうかんする{EOS}"
