	@ data/maps/BattleFrontier_BattlePikeLobby/scripts.inc:402 BattleFrontier_BattlePikeLobby_Text_ThinkAbilitiesUsefulHere
	.globl gText_Rom_233AD9
gText_Rom_233AD9: @ 0x08233AD9
	.string "ねえ! ねえ!\pここって ポケモンの とくせいが\nかつやく すると おもわない?"
	.byte EOS
	.if (. - gText_Rom_233AD9) > 0x29
	.error "gText_Rom_233AD9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_233AD9) < 0x29
	.space 0x29 - (. - gText_Rom_233AD9)
	.endif
