	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:456 BattleFrontier_BattleArenaLobby_Text_PresentYouWithPrize
	.globl gText_Rom_22FB58
gText_Rom_22FB58: @ 0x0822FB58
	.string "7にんぬきを たっせい されましたので\nこの しょうひんを おうけとり くだされ!"
	.byte EOS
	.if (. - gText_Rom_22FB58) > 0x2a
	.error "gText_Rom_22FB58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FB58) < 0x2a
	.space 0x2a - (. - gText_Rom_22FB58)
	.endif
