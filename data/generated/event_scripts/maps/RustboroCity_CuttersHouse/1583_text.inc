	@ data/maps/RustboroCity_CuttersHouse/scripts.inc:27 RustboroCity_CuttersHouse_Text_ExplainCut
	.globl gText_Rom_203E46
gText_Rom_203E46: @ 0x08203E46
	.string "その ひでんマシンは いあいぎり!\pひでんは たたかっていない ときでも\nポケモンが つかえる わざ!\pいあいぎりを おぼえた ポケモンは\nストーンバッジを もっていれば\lほそい きを きれるように なるのだよ!\pしかも ひでんマシンは わざマシンと ちがい\nつかっても なくならないぞ!$"
	.if (. - gText_Rom_203E46) > 0x91
	.error "gText_Rom_203E46 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203E46) < 0x91
	.space 0x91 - (. - gText_Rom_203E46)
	.endif
