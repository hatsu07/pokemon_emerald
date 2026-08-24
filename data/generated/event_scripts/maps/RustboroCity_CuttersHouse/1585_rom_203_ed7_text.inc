	@ data/maps/RustboroCity_CuttersHouse/scripts.inc:24 RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse
	.globl RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse
RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse: @ 0x08203DBC
	.string "その めつき\nしなやかな みの こなし……\lそして きたえられた ポケモン……\pきみは できる トレーナーだな!\pなにも いわなくて いい\nわたしには わかる わかるのだよ!\pきみならば この ひでんマシン\nうまく つかえるだろう\lさあ えんりょ せずに もっていきたまえ!{EOS}"
	.if (. - RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse) > 0x8a
	.error "RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse) < 0x8a
	.space 0x8a - (. - RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse)
	.endif
	@ data/maps/RustboroCity_CuttersHouse/scripts.inc:27 RustboroCity_CuttersHouse_Text_ExplainCut
	.globl RustboroCity_CuttersHouse_Text_ExplainCut
RustboroCity_CuttersHouse_Text_ExplainCut: @ 0x08203E46
	.string "その ひでんマシンは いあいぎり!\pひでんは たたかっていない ときでも\nポケモンが つかえる わざ!\pいあいぎりを おぼえた ポケモンは\nストーンバッジを もっていれば\lほそい きを きれるように なるのだよ!\pしかも ひでんマシンは わざマシンと ちがい\nつかっても なくならないぞ!{EOS}"
	.if (. - RustboroCity_CuttersHouse_Text_ExplainCut) > 0x91
	.error "RustboroCity_CuttersHouse_Text_ExplainCut may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_CuttersHouse_Text_ExplainCut) < 0x91
	.space 0x91 - (. - RustboroCity_CuttersHouse_Text_ExplainCut)
	.endif
	@ data/maps/RustboroCity_CuttersHouse/scripts.inc:30 RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees
	.globl RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees
RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees: @ 0x08203ED7
	.string "この カナズミが おおきくなるとき\nおとうさん みんなの ために\lいあいぎりを つかって\lあたりを きりひらいたんだって!{EOS}"
	.if (. - RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees) > 0x3e
	.error "RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees may not grow beyond its original slot"
	.endif
	.if (. - RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees) < 0x3e
	.space 0x3e - (. - RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees)
	.endif
	@ analyzed canonical ROM range 0x08203F15-0x08203F27
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08203F15: @ 0x08203F15
	.byte 0x00
.globl EventScript_JP_08203F16
EventScript_JP_08203F16: @ 0x08203F16
	loadword 0x00, RustboroCity_House2_Text_TrainerSchoolExcellent
	callstd 0x02
	end
.globl EventScript_JP_08203F1F
EventScript_JP_08203F1F: @ 0x08203F1F
	loadword 0x00, RustboroCity_House2_Text_RoxanneKnowsALot
	callstd 0x02
	end
