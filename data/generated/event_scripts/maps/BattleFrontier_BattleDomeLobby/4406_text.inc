	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:522 BattleFrontier_BattleDomeLobby_Text_HereIsYourPrize
	.globl gText_Rom_227845
gText_Rom_227845: @ 0x08227845
	.string "ゆうしょう されましたので\nこの しょうひんを さしあげます!$"
	.if (. - gText_Rom_227845) > 0x20
	.error "gText_Rom_227845 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_227845) < 0x20
	.space 0x20 - (. - gText_Rom_227845)
	.endif
