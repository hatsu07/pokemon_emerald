	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1006 BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge
	.globl gText_Rom_2209A0
gText_Rom_2209A0: @ 0x082209A0
	.string "またの ちょうせんを\nおまちして おります!"
	.byte EOS
	.if (. - gText_Rom_2209A0) > 0x17
	.error "gText_Rom_2209A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2209A0) < 0x17
	.space 0x17 - (. - gText_Rom_2209A0)
	.endif
