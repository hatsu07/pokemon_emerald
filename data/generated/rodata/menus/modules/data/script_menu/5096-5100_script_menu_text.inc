	@ src/data/script_menu.h:9 gText_Info2 (+3 aliases)
	.globl gText_Rom_5CAA9D
gText_Rom_5CAA9D: @ 0x085CAA9D
	.string "せつめい$"
	.if (. - gText_Rom_5CAA9D) > 0x5
	.error "gText_Rom_5CAA9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAA9D) < 0x5
	.space 0x5 - (. - gText_Rom_5CAA9D)
	.endif

	@ src/data/script_menu.h:65 script_menu_line_65
	.globl gText_Rom_5CAAA2
gText_Rom_5CAAA2: @ 0x085CAAA2
	.string "マッハ$"
	.if (. - gText_Rom_5CAAA2) > 0x4
	.error "gText_Rom_5CAAA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAAA2) < 0x4
	.space 0x4 - (. - gText_Rom_5CAAA2)
	.endif

	@ src/data/script_menu.h:66 script_menu_line_66
	.globl gText_Rom_5CAAA6
gText_Rom_5CAAA6: @ 0x085CAAA6
	.string "ダート$"
	.if (. - gText_Rom_5CAAA6) > 0x4
	.error "gText_Rom_5CAAA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAAA6) < 0x4
	.space 0x4 - (. - gText_Rom_5CAAA6)
	.endif
	@ Decoded text from ROM range: offset=0x5CAAAA, size=0x6
	.string "どく$"
	.string "まひ$"

