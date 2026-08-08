	@ data/text/battle_tent.inc:97 FallarborTown_BattleTentLobby_Text_PresentYouWithPrize
	.globl gText_Rom_274E4A
gText_Rom_274E4A: @ 0x08274E4A
	.string "3にんぬきを たっせい されましたので\nこの しょうひんを おうけとり くだされ!$"
	.if (. - gText_Rom_274E4A) > 0x2a
	.error "gText_Rom_274E4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274E4A) < 0x2a
	.space 0x2a - (. - gText_Rom_274E4A)
	.endif
