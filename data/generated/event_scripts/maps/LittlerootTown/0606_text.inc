	@ data/maps/LittlerootTown/scripts.inc:939 LittlerootTown_Text_ExplainRunningShoes
	.globl gText_Rom_1E4448
gText_Rom_1E4448: @ 0x081E4448
	.string "ママ『{PLAYER}!\nこれが せつめいしょ よ\p「ランニングシューズは\n Bボタンを おすことで いままでよりも\l はやく はしれるように なります!\p ランニングシューズを はいて\n おもいっきり そとを はしろう!」{EOS}"
	.if (. - gText_Rom_1E4448) > 0x6b
	.error "gText_Rom_1E4448 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E4448) < 0x6b
	.space 0x6b - (. - gText_Rom_1E4448)
	.endif
