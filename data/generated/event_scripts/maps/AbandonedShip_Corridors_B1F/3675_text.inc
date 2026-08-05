	@ data/maps/AbandonedShip_Corridors_B1F/scripts.inc:56 AbandonedShip_Corridors_B1F_Text_DuncanIntro (+1 aliases)
	.globl gText_Rom_21AC96
gText_Rom_21AC96: @ 0x0821AC96
	.string "ふなのりは ふねに のるとき\nかならず ポケモンを もっている!\lちょいと しょうぶ してくれ!"
	.byte EOS
	.if (. - gText_Rom_21AC96) > 0x31
	.error "gText_Rom_21AC96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AC96) < 0x31
	.space 0x31 - (. - gText_Rom_21AC96)
	.endif
