	@ data/text/battle_tent.inc:76 FallarborTown_BattleTentLobby_Text_GuideYouToBattleTent
	.globl gText_Rom_274DA3
gText_Rom_274DA3: @ 0x08274DA3
	.string "では バトルテントへ\nおつれいたしますぞ!$"
	.if (. - gText_Rom_274DA3) > 0x16
	.error "gText_Rom_274DA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274DA3) < 0x16
	.space 0x16 - (. - gText_Rom_274DA3)
	.endif
