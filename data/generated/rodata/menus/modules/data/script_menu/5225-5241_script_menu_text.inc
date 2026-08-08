	@ src/data/script_menu.h:549 script_menu_line_549
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAD33
gText_Rom_5CAD33: @ 0x085CAD33
	.string "ノーマルランク$"
	.if (. - gText_Rom_5CAD33) != 0x8
	.error "gText_Rom_5CAD33 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAD37
	.set gText_Rom_5CAD37, gText_Rom_5CAD33 + 0x4

	@ src/data/script_menu.h:550 script_menu_line_550
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAD3B
gText_Rom_5CAD3B: @ 0x085CAD3B
	.string "スーパーランク$"
	.if (. - gText_Rom_5CAD3B) != 0x8
	.error "gText_Rom_5CAD3B must retain its original byte length"
	.endif
	.globl gText_Rom_5CAD3F
	.set gText_Rom_5CAD3F, gText_Rom_5CAD3B + 0x4

	@ src/data/script_menu.h:551 script_menu_line_551
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAD43
gText_Rom_5CAD43: @ 0x085CAD43
	.string "ハイパーランク$"
	.if (. - gText_Rom_5CAD43) != 0x8
	.error "gText_Rom_5CAD43 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAD47
	.set gText_Rom_5CAD47, gText_Rom_5CAD43 + 0x4

	@ src/data/script_menu.h:552 script_menu_line_552
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAD4B
gText_Rom_5CAD4B: @ 0x085CAD4B
	.string "マスターランク$"
	.if (. - gText_Rom_5CAD4B) != 0x8
	.error "gText_Rom_5CAD4B must retain its original byte length"
	.endif
	.globl gText_Rom_5CAD4F
	.set gText_Rom_5CAD4F, gText_Rom_5CAD4B + 0x4

	@ src/data/script_menu.h:1330 script_menu_line_1330 (+2 aliases)
	.globl gText_Rom_5CAD53
gText_Rom_5CAD53: @ 0x085CAD53
	.string "シングル$"
	.if (. - gText_Rom_5CAD53) > 0x5
	.error "gText_Rom_5CAD53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD53) < 0x5
	.space 0x5 - (. - gText_Rom_5CAD53)
	.endif

	@ src/data/script_menu.h:1331 script_menu_line_1331 (+2 aliases)
	.globl gText_Rom_5CAD58
gText_Rom_5CAD58: @ 0x085CAD58
	.string "ダブル$"
	.if (. - gText_Rom_5CAD58) > 0x4
	.error "gText_Rom_5CAD58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD58) < 0x4
	.space 0x4 - (. - gText_Rom_5CAD58)
	.endif

	@ src/data/script_menu.h:1332 script_menu_line_1332 (+1 aliases)
	.globl gText_Rom_5CAD5C
gText_Rom_5CAD5C: @ 0x085CAD5C
	.string "マルチ$"
	.if (. - gText_Rom_5CAD5C) > 0x4
	.error "gText_Rom_5CAD5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD5C) < 0x4
	.space 0x4 - (. - gText_Rom_5CAD5C)
	.endif
