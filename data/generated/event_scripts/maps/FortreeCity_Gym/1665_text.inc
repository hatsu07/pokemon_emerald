	@ data/maps/FortreeCity_Gym/scripts.inc:230 FortreeCity_Gym_Text_DariusPostBattle
	.globl gText_Rom_20488D
gText_Rom_20488D: @ 0x0820488D
	.string "ぼくは まけたけど\nナギ リーダーの ポケモンは\lほんと てごわいぞ!$"
	.if (. - gText_Rom_20488D) > 0x24
	.error "gText_Rom_20488D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20488D) < 0x24
	.space 0x24 - (. - gText_Rom_20488D)
	.endif
