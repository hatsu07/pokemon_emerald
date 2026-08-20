	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:935 BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsWinner
	.globl gText_Rom_22952F
gText_Rom_22952F: @ 0x0822952F
	.string "{PLAYER}さんの かちです\nおめでとう ございます!{EOS}"
	.if (. - gText_Rom_22952F) > 0x18
	.error "gText_Rom_22952F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22952F) < 0x18
	.space 0x18 - (. - gText_Rom_22952F)
	.endif
