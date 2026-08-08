	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:936 BattleFrontier_BattleTowerLobby_Text_CongratsBeatenSeven
	.globl gText_Rom_220604
gText_Rom_220604: @ 0x08220604
	.string "おめでとう ございます!\nみごと 7にんぬき されましたね!\p"
	.byte EOS
	.if (. - gText_Rom_220604) > 0x20
	.error "gText_Rom_220604 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220604) < 0x20
	.space 0x20 - (. - gText_Rom_220604)
	.endif
