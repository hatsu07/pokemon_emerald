	@ src/data/script_menu.h:549 script_menu_line_549
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_NormalRank
sScriptMenuText_NormalRank: @ 0x085CAD33
	.string "ノーマルランク{EOS}"
	.if (. - sScriptMenuText_NormalRank) != 0x8
	.error "sScriptMenuText_NormalRank must retain its original byte length"
	.endif
	.globl gText_Rom_5CAD37
	.set gText_Rom_5CAD37, sScriptMenuText_NormalRank + 0x4

	@ src/data/script_menu.h:550 script_menu_line_550
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_SuperRank
sScriptMenuText_SuperRank: @ 0x085CAD3B
	.string "スーパーランク{EOS}"
	.if (. - sScriptMenuText_SuperRank) != 0x8
	.error "sScriptMenuText_SuperRank must retain its original byte length"
	.endif
	.globl gText_Rom_5CAD3F
	.set gText_Rom_5CAD3F, sScriptMenuText_SuperRank + 0x4

	@ src/data/script_menu.h:551 script_menu_line_551
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_HyperRank
sScriptMenuText_HyperRank: @ 0x085CAD43
	.string "ハイパーランク{EOS}"
	.if (. - sScriptMenuText_HyperRank) != 0x8
	.error "sScriptMenuText_HyperRank must retain its original byte length"
	.endif
	.globl gText_Rom_5CAD47
	.set gText_Rom_5CAD47, sScriptMenuText_HyperRank + 0x4

	@ src/data/script_menu.h:552 script_menu_line_552
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_MasterRank
sScriptMenuText_MasterRank: @ 0x085CAD4B
	.string "マスターランク{EOS}"
	.if (. - sScriptMenuText_MasterRank) != 0x8
	.error "sScriptMenuText_MasterRank must retain its original byte length"
	.endif
	.globl gText_Rom_5CAD4F
	.set gText_Rom_5CAD4F, sScriptMenuText_MasterRank + 0x4

	@ src/data/script_menu.h:1330 script_menu_line_1330 (+2 aliases)
	.globl gText_Rom_5CAD53
gText_Rom_5CAD53: @ 0x085CAD53
	.string "シングル{EOS}"
	.if (. - gText_Rom_5CAD53) > 0x5
	.error "gText_Rom_5CAD53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD53) < 0x5
	.space 0x5 - (. - gText_Rom_5CAD53)
	.endif

	@ src/data/script_menu.h:1331 script_menu_line_1331 (+2 aliases)
	.globl gText_Rom_5CAD58
gText_Rom_5CAD58: @ 0x085CAD58
	.string "ダブル{EOS}"
	.if (. - gText_Rom_5CAD58) > 0x4
	.error "gText_Rom_5CAD58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD58) < 0x4
	.space 0x4 - (. - gText_Rom_5CAD58)
	.endif

	@ src/data/script_menu.h:1332 script_menu_line_1332 (+1 aliases)
	.globl gText_Rom_5CAD5C
gText_Rom_5CAD5C: @ 0x085CAD5C
	.string "マルチ{EOS}"
	.if (. - gText_Rom_5CAD5C) > 0x4
	.error "gText_Rom_5CAD5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD5C) < 0x4
	.space 0x4 - (. - gText_Rom_5CAD5C)
	.endif
