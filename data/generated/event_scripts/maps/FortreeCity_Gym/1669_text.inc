	@ data/maps/FortreeCity_Gym/scripts.inc:245 FortreeCity_Gym_Text_WinonaDefeat (+1 aliases)
	.globl gText_Rom_204936
gText_Rom_204936: @ 0x08204936
	.string "わたしより かれいに\nポケモンを たたかわせる ひと……\lはじめて であいました……\pその じつりょくを みとめ\nこの ジムバッジを おわたしします!$"
	.if (. - gText_Rom_204936) > 0x4c
	.error "gText_Rom_204936 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204936) < 0x4c
	.space 0x4c - (. - gText_Rom_204936)
	.endif
