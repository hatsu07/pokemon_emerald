	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:940 BattleFrontier_BattleTowerLobby_Text_EarnedFabulousPrize
	.globl gText_Rom_220624
gText_Rom_220624: @ 0x08220624
	.string "7にんぬきを たっせい されましたので\nこの しょうひんを さしあげます!\p"
	.byte EOS
	.if (. - gText_Rom_220624) > 0x27
	.error "gText_Rom_220624 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220624) < 0x27
	.space 0x27 - (. - gText_Rom_220624)
	.endif
