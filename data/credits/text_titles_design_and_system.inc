
	@ src/data/credits.h:78 sCreditsText_PkmnDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sCreditsText_PkmnDesigners
sCreditsText_PkmnDesigners: @ 0x085C6D44
	.string "ポケモン デザイン{EOS}"
	.if (. - sCreditsText_PkmnDesigners) != 0xa
	.error "sCreditsText_PkmnDesigners must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D49
	.set gText_Rom_5C6D49, sCreditsText_PkmnDesigners + 0x5

	@ src/data/credits.h:79 sCreditsText_MusicComposition (+1 aliases)
	.globl gText_Rom_5C6D4E
gText_Rom_5C6D4E: @ 0x085C6D4E
	.string "おんがく{EOS}"
	.if (. - gText_Rom_5C6D4E) > 0x5
	.error "gText_Rom_5C6D4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6D4E) < 0x5
	.space 0x5 - (. - gText_Rom_5C6D4E)
	.endif

	@ src/data/credits.h:80 sCreditsText_SoundEffectsAndPkmnVoices
	.globl sCreditsText_SoundEffectsAndPkmnVoices
sCreditsText_SoundEffectsAndPkmnVoices: @ 0x085C6D53
	.string "サウンド エフェクト/ポケモン ボイス{EOS}"
	.if (. - sCreditsText_SoundEffectsAndPkmnVoices) > 0x14
	.error "sCreditsText_SoundEffectsAndPkmnVoices may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_SoundEffectsAndPkmnVoices) < 0x14
	.space 0x14 - (. - sCreditsText_SoundEffectsAndPkmnVoices)
	.endif

	@ src/data/credits.h:81 sCreditsText_GameDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sCreditsText_GameDesigners
sCreditsText_GameDesigners: @ 0x085C6D67
	.string "ゲーム デザイン{EOS}"
	.if (. - sCreditsText_GameDesigners) != 0x9
	.error "sCreditsText_GameDesigners must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D6B
	.set gText_Rom_5C6D6B, sCreditsText_GameDesigners + 0x4

	@ src/data/credits.h:82 sCreditsText_ScenarioPlot
	.globl sCreditsText_ScenarioPlot
sCreditsText_ScenarioPlot: @ 0x085C6D70
	.string "シナリオプロット{EOS}"
	.if (. - sCreditsText_ScenarioPlot) > 0x9
	.error "sCreditsText_ScenarioPlot may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_ScenarioPlot) < 0x9
	.space 0x9 - (. - sCreditsText_ScenarioPlot)
	.endif

	@ src/data/credits.h:83 sCreditsText_Scenario
	.globl sCreditsText_Scenario
sCreditsText_Scenario: @ 0x085C6D79
	.string "シナリオ{EOS}"
	.if (. - sCreditsText_Scenario) > 0x5
	.error "sCreditsText_Scenario may not grow beyond its original slot"
	.endif
	.if (. - sCreditsText_Scenario) < 0x5
	.space 0x5 - (. - sCreditsText_Scenario)
	.endif

	@ src/data/credits.h:84 sCreditsText_ScriptDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sCreditsText_ScriptDesigners
sCreditsText_ScriptDesigners: @ 0x085C6D7E
	.string "スクリプト せってい{EOS}"
	.if (. - sCreditsText_ScriptDesigners) != 0xb
	.error "sCreditsText_ScriptDesigners must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D84
	.set gText_Rom_5C6D84, sCreditsText_ScriptDesigners + 0x6

	@ src/data/credits.h:85 sCreditsText_MapDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sCreditsText_MapDesigners
sCreditsText_MapDesigners: @ 0x085C6D89
	.string "マップ デザイン{EOS}"
	.if (. - sCreditsText_MapDesigners) != 0x9
	.error "sCreditsText_MapDesigners must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D8D
	.set gText_Rom_5C6D8D, sCreditsText_MapDesigners + 0x4

	@ src/data/credits.h:86 sCreditsText_MapDataDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sCreditsText_MapDataDesigners
sCreditsText_MapDataDesigners: @ 0x085C6D92
	.string "マップデータ せってい{EOS}"
	.if (. - sCreditsText_MapDataDesigners) != 0xc
	.error "sCreditsText_MapDataDesigners must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D99
	.set gText_Rom_5C6D99, sCreditsText_MapDataDesigners + 0x7

	@ src/data/credits.h:87 sCreditsText_ParametricDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sCreditsText_ParametricDesigners
sCreditsText_ParametricDesigners: @ 0x085C6D9E
	.string "パラメーター せってい{EOS}"
	.if (. - sCreditsText_ParametricDesigners) != 0xc
	.error "sCreditsText_ParametricDesigners must retain its original byte length"
	.endif
	.globl gText_Rom_5C6DA5
	.set gText_Rom_5C6DA5, sCreditsText_ParametricDesigners + 0x7

	@ src/data/credits.h:88 sCreditsText_PokedexText
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sCreditsText_PokedexText
sCreditsText_PokedexText: @ 0x085C6DAA
	.string "ずかん テキスト{EOS}"
	.if (. - sCreditsText_PokedexText) != 0x9
	.error "sCreditsText_PokedexText must retain its original byte length"
	.endif
	.globl gText_Rom_5C6DAE
	.set gText_Rom_5C6DAE, sCreditsText_PokedexText + 0x4

	@ src/data/credits.h:89 sCreditsText_EnvAndToolPgrms
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sCreditsText_EnvAndToolPgrms
sCreditsText_EnvAndToolPgrms: @ 0x085C6DB3
	.string "かんきょう/ツール プログラム{EOS}"
	.if (. - sCreditsText_EnvAndToolPgrms) != 0x10
	.error "sCreditsText_EnvAndToolPgrms must retain its original byte length"
	.endif
	.globl gText_Rom_5C6DBD
	.set gText_Rom_5C6DBD, sCreditsText_EnvAndToolPgrms + 0xa
