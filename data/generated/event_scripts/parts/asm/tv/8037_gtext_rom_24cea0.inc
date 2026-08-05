	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gText_Rom_24CEA0
gText_Rom_24CEA0: @ 0x0824CEA0
	.string "「{0xFD}{0x02}！」\nうーん　　いい　ことばだねぇ！！\p{0xFD}{0x03}さんの　うれしさを\nこのことばが　よく　あらわしているよ！\pたしかに　{0xFD}{0x04}さんとの　たたかいは\nまさに　「{0xFD}{0x02}」　という\lかんじ　だったからねぇ！$"
	.if (. - gText_Rom_24CEA0) > 0x63
	.error "gText_Rom_24CEA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CEA0) < 0x63
	.space 0x63 - (. - gText_Rom_24CEA0)
	.endif
