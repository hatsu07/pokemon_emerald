
	@ src/data/credits.h:78 sCreditsText_PkmnDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D44
gText_Rom_5C6D44: @ 0x085C6D44
	.string "ポケモン デザイン$"
	.if (. - gText_Rom_5C6D44) != 0xa
	.error "gText_Rom_5C6D44 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D49
	.set gText_Rom_5C6D49, gText_Rom_5C6D44 + 0x5

	@ src/data/credits.h:79 sCreditsText_MusicComposition (+1 aliases)
	.globl gText_Rom_5C6D4E
gText_Rom_5C6D4E: @ 0x085C6D4E
	.string "おんがく$"
	.if (. - gText_Rom_5C6D4E) > 0x5
	.error "gText_Rom_5C6D4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6D4E) < 0x5
	.space 0x5 - (. - gText_Rom_5C6D4E)
	.endif

	@ src/data/credits.h:80 sCreditsText_SoundEffectsAndPkmnVoices
	.globl gText_Rom_5C6D53
gText_Rom_5C6D53: @ 0x085C6D53
	.string "サウンド エフェクト/ポケモン ボイス$"
	.if (. - gText_Rom_5C6D53) > 0x14
	.error "gText_Rom_5C6D53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6D53) < 0x14
	.space 0x14 - (. - gText_Rom_5C6D53)
	.endif

	@ src/data/credits.h:81 sCreditsText_GameDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D67
gText_Rom_5C6D67: @ 0x085C6D67
	.string "ゲーム デザイン$"
	.if (. - gText_Rom_5C6D67) != 0x9
	.error "gText_Rom_5C6D67 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D6B
	.set gText_Rom_5C6D6B, gText_Rom_5C6D67 + 0x4

	@ src/data/credits.h:82 sCreditsText_ScenarioPlot
	.globl gText_Rom_5C6D70
gText_Rom_5C6D70: @ 0x085C6D70
	.string "シナリオプロット$"
	.if (. - gText_Rom_5C6D70) > 0x9
	.error "gText_Rom_5C6D70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6D70) < 0x9
	.space 0x9 - (. - gText_Rom_5C6D70)
	.endif

	@ src/data/credits.h:83 sCreditsText_Scenario
	.globl gText_Rom_5C6D79
gText_Rom_5C6D79: @ 0x085C6D79
	.string "シナリオ$"
	.if (. - gText_Rom_5C6D79) > 0x5
	.error "gText_Rom_5C6D79 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6D79) < 0x5
	.space 0x5 - (. - gText_Rom_5C6D79)
	.endif

	@ src/data/credits.h:84 sCreditsText_ScriptDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D7E
gText_Rom_5C6D7E: @ 0x085C6D7E
	.string "スクリプト せってい$"
	.if (. - gText_Rom_5C6D7E) != 0xb
	.error "gText_Rom_5C6D7E must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D84
	.set gText_Rom_5C6D84, gText_Rom_5C6D7E + 0x6

	@ src/data/credits.h:85 sCreditsText_MapDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D89
gText_Rom_5C6D89: @ 0x085C6D89
	.string "マップ デザイン$"
	.if (. - gText_Rom_5C6D89) != 0x9
	.error "gText_Rom_5C6D89 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D8D
	.set gText_Rom_5C6D8D, gText_Rom_5C6D89 + 0x4

	@ src/data/credits.h:86 sCreditsText_MapDataDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D92
gText_Rom_5C6D92: @ 0x085C6D92
	.string "マップデータ せってい$"
	.if (. - gText_Rom_5C6D92) != 0xc
	.error "gText_Rom_5C6D92 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D99
	.set gText_Rom_5C6D99, gText_Rom_5C6D92 + 0x7

	@ src/data/credits.h:87 sCreditsText_ParametricDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D9E
gText_Rom_5C6D9E: @ 0x085C6D9E
	.string "パラメーター せってい$"
	.if (. - gText_Rom_5C6D9E) != 0xc
	.error "gText_Rom_5C6D9E must retain its original byte length"
	.endif
	.globl gText_Rom_5C6DA5
	.set gText_Rom_5C6DA5, gText_Rom_5C6D9E + 0x7

	@ src/data/credits.h:88 sCreditsText_PokedexText
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6DAA
gText_Rom_5C6DAA: @ 0x085C6DAA
	.string "ずかん テキスト$"
	.if (. - gText_Rom_5C6DAA) != 0x9
	.error "gText_Rom_5C6DAA must retain its original byte length"
	.endif
	.globl gText_Rom_5C6DAE
	.set gText_Rom_5C6DAE, gText_Rom_5C6DAA + 0x4

	@ src/data/credits.h:89 sCreditsText_EnvAndToolPgrms
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6DB3
gText_Rom_5C6DB3: @ 0x085C6DB3
	.string "かんきょう/ツール プログラム$"
	.if (. - gText_Rom_5C6DB3) != 0x10
	.error "gText_Rom_5C6DB3 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6DBD
	.set gText_Rom_5C6DBD, gText_Rom_5C6DB3 + 0xa
