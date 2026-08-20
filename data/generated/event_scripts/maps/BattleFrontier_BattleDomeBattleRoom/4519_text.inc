	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:926 BattleFrontier_BattleDomeBattleRoom_Text_PlayerHasEnteredDome
	.globl gText_Rom_2294FC
gText_Rom_2294FC: @ 0x082294FC
	.string "{PLAYER}さんの\nにゅうじょう です!{EOS}"
	.if (. - gText_Rom_2294FC) > 0x11
	.error "gText_Rom_2294FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2294FC) < 0x11
	.space 0x11 - (. - gText_Rom_2294FC)
	.endif
