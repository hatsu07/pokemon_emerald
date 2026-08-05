	@ data/maps/MossdeepCity_PokemonCenter_1F/scripts.inc:26 MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable
	.globl gText_Rom_20C4E1
gText_Rom_20C4E1: @ 0x0820C4E1
	.string "この まちの ジムリーダー\nなんといっても あの コンビネーションは\lさいこう! さすが! って かんじよ$"
	.if (. - gText_Rom_20C4E1) > 0x36
	.error "gText_Rom_20C4E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C4E1) < 0x36
	.space 0x36 - (. - gText_Rom_20C4E1)
	.endif
