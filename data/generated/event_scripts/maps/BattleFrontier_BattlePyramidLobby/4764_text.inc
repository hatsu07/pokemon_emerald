	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:559 BattleFrontier_BattlePyramidLobby_Text_ShowYouIntoPyramid
	.globl gText_Rom_22C866
gText_Rom_22C866: @ 0x0822C866
	.string "では バトルピラミッドの なかへ\nおつれいたしますぞ!$"
	.if (. - gText_Rom_22C866) > 0x1c
	.error "gText_Rom_22C866 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C866) < 0x1c
	.space 0x1c - (. - gText_Rom_22C866)
	.endif
