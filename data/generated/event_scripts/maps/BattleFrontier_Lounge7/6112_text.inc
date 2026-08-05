	@ data/maps/BattleFrontier_Lounge7/scripts.inc:319 BattleFrontier_Lounge7_Text_HaventGotEnoughPoints
	.globl gText_Rom_239D7C
gText_Rom_239D7C: @ 0x08239D7C
	.string "なんじゃ……\nあんた バトルポイントが たりんぞ!"
	.byte EOS
	.if (. - gText_Rom_239D7C) > 0x1a
	.error "gText_Rom_239D7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239D7C) < 0x1a
	.space 0x1a - (. - gText_Rom_239D7C)
	.endif
