	@ data/maps/MossdeepCity_StevensHouse/scripts.inc:159 MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum
	.globl gText_Rom_20CAF7
gText_Rom_20CAF7: @ 0x0820CAF7
	.string "{PLAYER}は\nモンスターボールを しらべた!\pなかには ポケモンの\nダンバルが はいっている!\pモンスターボールを もって いきますか?$"
	.if (. - gText_Rom_20CAF7) > 0x42
	.error "gText_Rom_20CAF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20CAF7) < 0x42
	.space 0x42 - (. - gText_Rom_20CAF7)
	.endif
