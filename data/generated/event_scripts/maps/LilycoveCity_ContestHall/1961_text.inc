	@ data/maps/LilycoveCity_ContestHall/scripts.inc:394 LilycoveCity_ContestHall_Text_PetalDanceIsMarvel
	.globl gText_Rom_2080DF
gText_Rom_2080DF: @ 0x082080DF
	.string "ぼくの ポケモンの かれいな\nはなびらのまい……\lだれにも じゃまは させないぞ！$"
	.if (. - gText_Rom_2080DF) > 0x2a
	.error "gText_Rom_2080DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2080DF) < 0x2a
	.space 0x2a - (. - gText_Rom_2080DF)
	.endif
