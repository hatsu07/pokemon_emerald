	@ src/data/script_menu.h:258 script_menu_line_258 (+1 aliases)
	.globl gText_Rom_5CAB8A
gText_Rom_5CAB8A: @ 0x085CAB8A
	.string "あかいビードロ$"
	.if (. - gText_Rom_5CAB8A) > 0x8
	.error "gText_Rom_5CAB8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB8A) < 0x8
	.space 0x8 - (. - gText_Rom_5CAB8A)
	.endif
