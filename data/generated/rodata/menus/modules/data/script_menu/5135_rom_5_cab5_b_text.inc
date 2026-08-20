	@ src/data/script_menu.h:237 script_menu_line_237 (+1 aliases)
	.globl gText_Rom_5CAB5B
gText_Rom_5CAB5B: @ 0x085CAB5B
	.string "ジャンプ{EOS}"
	.if (. - gText_Rom_5CAB5B) > 0x5
	.error "gText_Rom_5CAB5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB5B) < 0x5
	.space 0x5 - (. - gText_Rom_5CAB5B)
	.endif
