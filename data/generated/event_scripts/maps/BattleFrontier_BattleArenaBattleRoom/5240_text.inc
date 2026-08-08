	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:605 BattleFrontier_BattleArenaBattleRoom_Text_SoAreYouReady
	.globl gText_Rom_230CF3
gText_Rom_230CF3: @ 0x08230CF3
	.string "…… …… …… …… だから いーい?"
	.byte EOS
	.if (. - gText_Rom_230CF3) > 0x15
	.error "gText_Rom_230CF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230CF3) < 0x15
	.space 0x15 - (. - gText_Rom_230CF3)
	.endif
