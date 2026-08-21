	@ src/data/script_menu.h:244 script_menu_line_244
	.globl gText_Rom_5CAB65
gText_Rom_5CAB65: @ 0x085CAB65
	.string "ふまん{EOS}"
	.if (. - gText_Rom_5CAB65) > 0x4
	.error "gText_Rom_5CAB65 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB65) < 0x4
	.space 0x4 - (. - gText_Rom_5CAB65)
	.endif

	@ src/data/script_menu.h:249 script_menu_line_249
	.globl gText_Rom_5CAB69
gText_Rom_5CAB69: @ 0x085CAB69
	.string "しんかいのキバ{EOS}"
	.if (. - gText_Rom_5CAB69) > 0x8
	.error "gText_Rom_5CAB69 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB69) < 0x8
	.space 0x8 - (. - gText_Rom_5CAB69)
	.endif

	@ src/data/script_menu.h:250 script_menu_line_250
	.globl gText_Rom_5CAB71
gText_Rom_5CAB71: @ 0x085CAB71
	.string "しんかいのウロコ{EOS}"
	.if (. - gText_Rom_5CAB71) > 0x9
	.error "gText_Rom_5CAB71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB71) < 0x9
	.space 0x9 - (. - gText_Rom_5CAB71)
	.endif

	@ src/data/script_menu.h:256 script_menu_line_256 (+1 aliases)
	.globl gText_Rom_5CAB7A
gText_Rom_5CAB7A: @ 0x085CAB7A
	.string "あおいビードロ{EOS}"
	.if (. - gText_Rom_5CAB7A) > 0x8
	.error "gText_Rom_5CAB7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB7A) < 0x8
	.space 0x8 - (. - gText_Rom_5CAB7A)
	.endif

	@ src/data/script_menu.h:257 script_menu_line_257 (+1 aliases)
	.globl gText_Rom_5CAB82
gText_Rom_5CAB82: @ 0x085CAB82
	.string "きいろビードロ{EOS}"
	.if (. - gText_Rom_5CAB82) > 0x8
	.error "gText_Rom_5CAB82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB82) < 0x8
	.space 0x8 - (. - gText_Rom_5CAB82)
	.endif

	@ src/data/script_menu.h:258 script_menu_line_258 (+1 aliases)
	.globl gText_Rom_5CAB8A
gText_Rom_5CAB8A: @ 0x085CAB8A
	.string "あかいビードロ{EOS}"
	.if (. - gText_Rom_5CAB8A) > 0x8
	.error "gText_Rom_5CAB8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB8A) < 0x8
	.space 0x8 - (. - gText_Rom_5CAB8A)
	.endif

	@ src/data/script_menu.h:259 script_menu_line_259 (+1 aliases)
	.globl gText_Rom_5CAB92
gText_Rom_5CAB92: @ 0x085CAB92
	.string "しろいビードロ{EOS}"
	.if (. - gText_Rom_5CAB92) > 0x8
	.error "gText_Rom_5CAB92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB92) < 0x8
	.space 0x8 - (. - gText_Rom_5CAB92)
	.endif

	@ src/data/script_menu.h:260 script_menu_line_260 (+1 aliases)
	.globl gText_Rom_5CAB9A
gText_Rom_5CAB9A: @ 0x085CAB9A
	.string "くろいビードロ{EOS}"
	.if (. - gText_Rom_5CAB9A) > 0x8
	.error "gText_Rom_5CAB9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB9A) < 0x8
	.space 0x8 - (. - gText_Rom_5CAB9A)
	.endif
	@ Decoded text from ROM range: offset=0x5CABA2, size=0x7
	.string "ガラスのいす{EOS}"

	@ src/data/script_menu.h:262 script_menu_line_262
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CABA9
gText_Rom_5CABA9: @ 0x085CABA9
	.string "ガラスのつくえ{EOS}"
	.if (. - gText_Rom_5CABA9) != 0x8
	.error "gText_Rom_5CABA9 must retain its original byte length"
	.endif
