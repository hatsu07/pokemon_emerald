	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:258 BattleFrontier_OutsideEast_Text_BattleTowerFeelsSpecial
	.globl gText_Rom_222C70
gText_Rom_222C70: @ 0x08222C70
	.string "うっひゃー でかい!\pやはり バトルタワーは\nとくべつ って かんじが するな$"
	.if (. - gText_Rom_222C70) > 0x28
	.error "gText_Rom_222C70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222C70) < 0x28
	.space 0x28 - (. - gText_Rom_222C70)
	.endif
