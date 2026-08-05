	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:132 SootopolisCity_Gym_B1F_Text_AnnikaPostBattle
	.globl gText_Rom_20EF29
gText_Rom_20EF29: @ 0x0820EF29
	.string "わたしが このジムに いるのは\nアダンさんが わたしの ポケモンちゃんを\lほめて くれたから なのよぉ\pあーあ ダンナに であうまえに\nアダンさんに であっていれば いまごろは…$"
	.if (. - gText_Rom_20EF29) > 0x5a
	.error "gText_Rom_20EF29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EF29) < 0x5a
	.space 0x5a - (. - gText_Rom_20EF29)
	.endif
