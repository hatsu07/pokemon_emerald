	@ data/maps/RustboroCity_CuttersHouse/scripts.inc:24 RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse
	.globl gText_Rom_203DBC
gText_Rom_203DBC: @ 0x08203DBC
	.string "その めつき\nしなやかな みの こなし……\lそして きたえられた ポケモン……\pきみは できる トレーナーだな!\pなにも いわなくて いい\nわたしには わかる わかるのだよ!\pきみならば この ひでんマシン\nうまく つかえるだろう\lさあ えんりょ せずに もっていきたまえ!{EOS}"
	.if (. - gText_Rom_203DBC) > 0x8a
	.error "gText_Rom_203DBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203DBC) < 0x8a
	.space 0x8a - (. - gText_Rom_203DBC)
	.endif
	@ data/maps/RustboroCity_CuttersHouse/scripts.inc:27 RustboroCity_CuttersHouse_Text_ExplainCut
	.globl gText_Rom_203E46
gText_Rom_203E46: @ 0x08203E46
	.string "その ひでんマシンは いあいぎり!\pひでんは たたかっていない ときでも\nポケモンが つかえる わざ!\pいあいぎりを おぼえた ポケモンは\nストーンバッジを もっていれば\lほそい きを きれるように なるのだよ!\pしかも ひでんマシンは わざマシンと ちがい\nつかっても なくならないぞ!{EOS}"
	.if (. - gText_Rom_203E46) > 0x91
	.error "gText_Rom_203E46 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203E46) < 0x91
	.space 0x91 - (. - gText_Rom_203E46)
	.endif
	@ data/maps/RustboroCity_CuttersHouse/scripts.inc:30 RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees
	.globl gText_Rom_203ED7
gText_Rom_203ED7: @ 0x08203ED7
	.string "この カナズミが おおきくなるとき\nおとうさん みんなの ために\lいあいぎりを つかって\lあたりを きりひらいたんだって!{EOS}"
	.if (. - gText_Rom_203ED7) > 0x3e
	.error "gText_Rom_203ED7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203ED7) < 0x3e
	.space 0x3e - (. - gText_Rom_203ED7)
	.endif
	@ analyzed canonical ROM range 0x08203F15-0x08203F27
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08203F15: @ 0x08203F15
	.byte 0x00
.globl EventScript_JP_08203F16
EventScript_JP_08203F16: @ 0x08203F16
	loadword 0x00, gText_Rom_203F28
	callstd 0x02
	end
.globl EventScript_JP_08203F1F
EventScript_JP_08203F1F: @ 0x08203F1F
	loadword 0x00, gText_Rom_203F64
	callstd 0x02
	end
