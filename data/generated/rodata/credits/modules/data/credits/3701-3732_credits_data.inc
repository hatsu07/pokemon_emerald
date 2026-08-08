	@ src/data/credits.h:66 sCreditsText_PkmnEmeraldVersion
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6CB4
gText_Rom_5C6CB4: @ 0x085C6CB4
	.string "ポケットモンスター エメラルド$"
	.if (. - gText_Rom_5C6CB4) != 0x10
	.error "gText_Rom_5C6CB4 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6CBE
	.set gText_Rom_5C6CBE, gText_Rom_5C6CB4 + 0xa
	.globl gText_Rom_5C6CC0
	.set gText_Rom_5C6CC0, gText_Rom_5C6CB4 + 0xc

	@ src/data/credits.h:67 sCreditsText_Credits
	.globl gText_Rom_5C6CC4
gText_Rom_5C6CC4: @ 0x085C6CC4
	.string "スタッフリスト$"
	.if (. - gText_Rom_5C6CC4) > 0x8
	.error "gText_Rom_5C6CC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6CC4) < 0x8
	.space 0x8 - (. - gText_Rom_5C6CC4)
	.endif

	@ src/data/credits.h:68 sCreditsText_ExecutiveDirector
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6CCC
gText_Rom_5C6CCC: @ 0x085C6CCC
	.string "エグゼクティブ ディレクター$"
	.if (. - gText_Rom_5C6CCC) != 0xf
	.error "gText_Rom_5C6CCC must retain its original byte length"
	.endif
	.globl gText_Rom_5C6CD4
	.set gText_Rom_5C6CD4, gText_Rom_5C6CCC + 0x8

	@ src/data/credits.h:69 sCreditsText_Director
	.globl gText_Rom_5C6CDB
gText_Rom_5C6CDB: @ 0x085C6CDB
	.string "ディレクター$"
	.if (. - gText_Rom_5C6CDB) > 0x7
	.error "gText_Rom_5C6CDB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6CDB) < 0x7
	.space 0x7 - (. - gText_Rom_5C6CDB)
	.endif

	@ src/data/credits.h:70 sCreditsText_ArtDirector
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6CE2
gText_Rom_5C6CE2: @ 0x085C6CE2
	.string "アート ディレクター$"
	.if (. - gText_Rom_5C6CE2) != 0xb
	.error "gText_Rom_5C6CE2 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6CE6
	.set gText_Rom_5C6CE6, gText_Rom_5C6CE2 + 0x4

	@ src/data/credits.h:71 sCreditsText_BattleDirector
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6CED
gText_Rom_5C6CED: @ 0x085C6CED
	.string "バトル ディレクター$"
	.if (. - gText_Rom_5C6CED) != 0xb
	.error "gText_Rom_5C6CED must retain its original byte length"
	.endif
	.globl gText_Rom_5C6CF1
	.set gText_Rom_5C6CF1, gText_Rom_5C6CED + 0x4

	@ src/data/credits.h:72 sCreditsText_MainProgrammer
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6CF8
gText_Rom_5C6CF8: @ 0x085C6CF8
	.string "メイン プログラム$"
	.if (. - gText_Rom_5C6CF8) != 0xa
	.error "gText_Rom_5C6CF8 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6CFC
	.set gText_Rom_5C6CFC, gText_Rom_5C6CF8 + 0x4

	@ src/data/credits.h:73 sCreditsText_BattleSystemPgrms
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D02
gText_Rom_5C6D02: @ 0x085C6D02
	.string "バトル システム プログラム$"
	.if (. - gText_Rom_5C6D02) != 0xf
	.error "gText_Rom_5C6D02 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D0B
	.set gText_Rom_5C6D0B, gText_Rom_5C6D02 + 0x9

	@ src/data/credits.h:74 sCreditsText_FieldSystemPgrms
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D11
gText_Rom_5C6D11: @ 0x085C6D11
	.string "フィールド システム プログラム$"
	.if (. - gText_Rom_5C6D11) != 0x11
	.error "gText_Rom_5C6D11 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D1C
	.set gText_Rom_5C6D1C, gText_Rom_5C6D11 + 0xb

	@ src/data/credits.h:75 sCreditsText_Programmers
	.globl gText_Rom_5C6D22
gText_Rom_5C6D22: @ 0x085C6D22
	.string "プログラム$"
	.if (. - gText_Rom_5C6D22) > 0x6
	.error "gText_Rom_5C6D22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6D22) < 0x6
	.space 0x6 - (. - gText_Rom_5C6D22)
	.endif

	@ src/data/credits.h:76 sCreditsText_MainGraphicDesigner
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D28
gText_Rom_5C6D28: @ 0x085C6D28
	.string "メイン グラフィック デザイン$"
	.if (. - gText_Rom_5C6D28) != 0x10
	.error "gText_Rom_5C6D28 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D2C
	.set gText_Rom_5C6D2C, gText_Rom_5C6D28 + 0x4
	.globl gText_Rom_5C6D33
	.set gText_Rom_5C6D33, gText_Rom_5C6D28 + 0xb

	@ src/data/credits.h:77 sCreditsText_GraphicDesigners (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D38
gText_Rom_5C6D38: @ 0x085C6D38
	.string "グラフィック デザイン$"
	.if (. - gText_Rom_5C6D38) != 0xc
	.error "gText_Rom_5C6D38 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D3F
	.set gText_Rom_5C6D3F, gText_Rom_5C6D38 + 0x7
