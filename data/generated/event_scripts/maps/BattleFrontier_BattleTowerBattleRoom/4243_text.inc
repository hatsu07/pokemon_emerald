	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:483 BattleFrontier_BattleTowerBattleRoom_Text_CancelYourChallenge
	.globl gText_Rom_222464
gText_Rom_222464: @ 0x08222464
	.string "バトルルームの ちょうせんを\nちゅうし しますか?{EOS}"
	.if (. - gText_Rom_222464) > 0x1a
	.error "gText_Rom_222464 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222464) < 0x1a
	.space 0x1a - (. - gText_Rom_222464)
	.endif
