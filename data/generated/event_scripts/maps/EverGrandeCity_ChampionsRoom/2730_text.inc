	@ data/maps/EverGrandeCity_ChampionsRoom/scripts.inc:225 EverGrandeCity_ChampionsRoom_Text_Defeat (+1 aliases)
	.globl gText_Rom_210C82
gText_Rom_210C82: @ 0x08210C82
	.string "チャンピオンである\nわたしを うちまかす とは……\pなんと ワンダフル!\nにくらしいほど エレガント!\lだけど とっても グロリアス!\pさすがだよ {PLAYER}{KUN}!\pきみは ほんとうに すばらしい\nポケモン トレーナーだ!{EOS}"
	.if (. - gText_Rom_210C82) > 0x6d
	.error "gText_Rom_210C82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_210C82) < 0x6d
	.space 0x6d - (. - gText_Rom_210C82)
	.endif
