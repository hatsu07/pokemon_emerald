	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:548 BattleFrontier_BattleTowerBattleRoom_Text_AnabelCongratsYourPassPlease
	.globl gText_Rom_2226EE
gText_Rom_2226EE: @ 0x082226EE
	.string "リラ『ふふっ おめでとう……\nさあ あなたの フロンティアパスを……{EOS}"
	.if (. - gText_Rom_2226EE) > 0x23
	.error "gText_Rom_2226EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2226EE) < 0x23
	.space 0x23 - (. - gText_Rom_2226EE)
	.endif
