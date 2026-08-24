	@ src/data/credits.h:66 sCreditsText_PkmnEmeraldVersion
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sCreditsText_PkmnEmeraldVersion
sCreditsText_PkmnEmeraldVersion: @ 0x085C6CB4
	.string "ポケットモンスター エメラルド{EOS}"
	.if (. - sCreditsText_PkmnEmeraldVersion) != 0x10
	.error "sCreditsText_PkmnEmeraldVersion must retain its original byte length"
	.endif
	.globl gText_Rom_5C6CBE
	.set gText_Rom_5C6CBE, sCreditsText_PkmnEmeraldVersion + 0xa
	.globl gText_Rom_5C6CC0
	.set gText_Rom_5C6CC0, sCreditsText_PkmnEmeraldVersion + 0xc

	@ src/data/credits.h:67 sCreditsText_Credits
	.globl sCreditsText_Credits
sCreditsText_Credits: @ 0x085C6CC4
	.string "スタッフリスト{EOS}"
	.if (. - sCreditsText_Credits) > 0x8
	.error "sCreditsText_Credits may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_Credits) < 0x8
	.space 0x8 - (. - sCreditsText_Credits)
	.endif

	@ src/data/credits.h:68 sCreditsText_ExecutiveDirector
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sCreditsText_ExecutiveDirector
sCreditsText_ExecutiveDirector: @ 0x085C6CCC
	.string "エグゼクティブ ディレクター{EOS}"
	.if (. - sCreditsText_ExecutiveDirector) != 0xf
	.error "sCreditsText_ExecutiveDirector must retain its original byte length"
	.endif
	.globl gText_Rom_5C6CD4
	.set gText_Rom_5C6CD4, sCreditsText_ExecutiveDirector + 0x8

	@ src/data/credits.h:69 sCreditsText_Director
	.globl sCreditsText_Director
sCreditsText_Director: @ 0x085C6CDB
	.string "ディレクター{EOS}"
	.if (. - sCreditsText_Director) > 0x7
	.error "sCreditsText_Director may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_Director) < 0x7
	.space 0x7 - (. - sCreditsText_Director)
	.endif

	@ src/data/credits.h:70 sCreditsText_ArtDirector
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sCreditsText_ArtDirector
sCreditsText_ArtDirector: @ 0x085C6CE2
	.string "アート ディレクター{EOS}"
	.if (. - sCreditsText_ArtDirector) != 0xb
	.error "sCreditsText_ArtDirector must retain its original byte length"
	.endif
	.globl gText_Rom_5C6CE6
	.set gText_Rom_5C6CE6, sCreditsText_ArtDirector + 0x4

	@ src/data/credits.h:71 sCreditsText_BattleDirector
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sCreditsText_BattleDirector
sCreditsText_BattleDirector: @ 0x085C6CED
	.string "バトル ディレクター{EOS}"
	.if (. - sCreditsText_BattleDirector) != 0xb
	.error "sCreditsText_BattleDirector must retain its original byte length"
	.endif
	.globl gText_Rom_5C6CF1
	.set gText_Rom_5C6CF1, sCreditsText_BattleDirector + 0x4

	@ src/data/credits.h:72 sCreditsText_MainProgrammer
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sCreditsText_MainProgrammer
sCreditsText_MainProgrammer: @ 0x085C6CF8
	.string "メイン プログラム{EOS}"
	.if (. - sCreditsText_MainProgrammer) != 0xa
	.error "sCreditsText_MainProgrammer must retain its original byte length"
	.endif
	.globl gText_Rom_5C6CFC
	.set gText_Rom_5C6CFC, sCreditsText_MainProgrammer + 0x4

	@ src/data/credits.h:73 sCreditsText_BattleSystemPgrms
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sCreditsText_BattleSystemPgrms
sCreditsText_BattleSystemPgrms: @ 0x085C6D02
	.string "バトル システム プログラム{EOS}"
	.if (. - sCreditsText_BattleSystemPgrms) != 0xf
	.error "sCreditsText_BattleSystemPgrms must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D0B
	.set gText_Rom_5C6D0B, sCreditsText_BattleSystemPgrms + 0x9

	@ src/data/credits.h:74 sCreditsText_FieldSystemPgrms
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sCreditsText_FieldSystemPgrms
sCreditsText_FieldSystemPgrms: @ 0x085C6D11
	.string "フィールド システム プログラム{EOS}"
	.if (. - sCreditsText_FieldSystemPgrms) != 0x11
	.error "sCreditsText_FieldSystemPgrms must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D1C
	.set gText_Rom_5C6D1C, sCreditsText_FieldSystemPgrms + 0xb

	@ src/data/credits.h:75 sCreditsText_Programmers
	.globl sCreditsText_Programmers
sCreditsText_Programmers: @ 0x085C6D22
	.string "プログラム{EOS}"
	.if (. - sCreditsText_Programmers) > 0x6
	.error "sCreditsText_Programmers may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_Programmers) < 0x6
	.space 0x6 - (. - sCreditsText_Programmers)
	.endif

	@ src/data/credits.h:76 sCreditsText_MainGraphicDesigner
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sCreditsText_MainGraphicDesigner
sCreditsText_MainGraphicDesigner: @ 0x085C6D28
	.string "メイン グラフィック デザイン{EOS}"
	.if (. - sCreditsText_MainGraphicDesigner) != 0x10
	.error "sCreditsText_MainGraphicDesigner must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D2C
	.set gText_Rom_5C6D2C, sCreditsText_MainGraphicDesigner + 0x4
	.globl gText_Rom_5C6D33
	.set gText_Rom_5C6D33, sCreditsText_MainGraphicDesigner + 0xb

	@ src/data/credits.h:77 sCreditsText_GraphicDesigners (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sCreditsText_GraphicDesigners
sCreditsText_GraphicDesigners: @ 0x085C6D38
	.string "グラフィック デザイン{EOS}"
	.if (. - sCreditsText_GraphicDesigners) != 0xc
	.error "sCreditsText_GraphicDesigners must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D3F
	.set gText_Rom_5C6D3F, sCreditsText_GraphicDesigners + 0x7
