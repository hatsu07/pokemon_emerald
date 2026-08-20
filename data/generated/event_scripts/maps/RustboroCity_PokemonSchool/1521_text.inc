	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:253 RustboroCity_PokemonSchool_Text_ScottStoneBadge
	.globl gText_Rom_20336D
gText_Rom_20336D: @ 0x0820336D
	.string "エニシダ『ん それは……\nストーンバッジ だね\lなかなか やるじゃ ないか!\pだけど できれば\nたたかっている ところを みたかったな\lリーグバッジ だけでは きみが\lどんな トレーナー なのかは\lよく わからない からね{EOS}"
	.if (. - gText_Rom_20336D) > 0x70
	.error "gText_Rom_20336D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20336D) < 0x70
	.space 0x70 - (. - gText_Rom_20336D)
	.endif
