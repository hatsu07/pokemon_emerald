	@ src/data/script_menu.h:549 script_menu_line_549
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_NormalRank
sScriptMenuText_NormalRank: @ 0x085CAD33
	.string "ノーマルランク{EOS}"
	.if (. - sScriptMenuText_NormalRank) != 0x8
	.error "sScriptMenuText_NormalRank must retain its original byte length"
	.endif

	@ src/data/script_menu.h:550 script_menu_line_550
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_SuperRank
sScriptMenuText_SuperRank: @ 0x085CAD3B
	.string "スーパーランク{EOS}"
	.if (. - sScriptMenuText_SuperRank) != 0x8
	.error "sScriptMenuText_SuperRank must retain its original byte length"
	.endif

	@ src/data/script_menu.h:551 script_menu_line_551
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_HyperRank
sScriptMenuText_HyperRank: @ 0x085CAD43
	.string "ハイパーランク{EOS}"
	.if (. - sScriptMenuText_HyperRank) != 0x8
	.error "sScriptMenuText_HyperRank must retain its original byte length"
	.endif

	@ src/data/script_menu.h:552 script_menu_line_552
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_MasterRank
sScriptMenuText_MasterRank: @ 0x085CAD4B
	.string "マスターランク{EOS}"
	.if (. - sScriptMenuText_MasterRank) != 0x8
	.error "sScriptMenuText_MasterRank must retain its original byte length"
	.endif

	@ src/data/script_menu.h:1330 script_menu_line_1330 (+2 aliases)
	.globl gStdString_Single
gStdString_Single: @ 0x085CAD53
	.string "シングル{EOS}"
	.if (. - gStdString_Single) > 0x5
	.error "gStdString_Single may not grow beyond its original slot"
	.endif
	.if (. - gStdString_Single) < 0x5
	.space 0x5 - (. - gStdString_Single)
	.endif

	@ src/data/script_menu.h:1331 script_menu_line_1331 (+2 aliases)
	.globl gStdString_Double
gStdString_Double: @ 0x085CAD58
	.string "ダブル{EOS}"
	.if (. - gStdString_Double) > 0x4
	.error "gStdString_Double may not grow beyond its original slot"
	.endif
	.if (. - gStdString_Double) < 0x4
	.space 0x4 - (. - gStdString_Double)
	.endif

	@ src/data/script_menu.h:1332 script_menu_line_1332 (+1 aliases)
	.globl gStdString_Multi
gStdString_Multi: @ 0x085CAD5C
	.string "マルチ{EOS}"
	.if (. - gStdString_Multi) > 0x4
	.error "gStdString_Multi may not grow beyond its original slot"
	.endif
	.if (. - gStdString_Multi) < 0x4
	.space 0x4 - (. - gStdString_Multi)
	.endif
