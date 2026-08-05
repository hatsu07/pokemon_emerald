	@ data/maps/MossdeepCity/scripts.inc:330 MossdeepCity_Text_FeelReliefOnLand
	.globl gText_Rom_1E19B8
gText_Rom_1E19B8: @ 0x081E19B8
	.string "おれは ふなのり だから\nやっぱり うみのほうが だいじさ!\pでも ひさしぶりに りくに あがると\nやっぱり ホッと するんだよな!$"
	.if (. - gText_Rom_1E19B8) > 0x43
	.error "gText_Rom_1E19B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E19B8) < 0x43
	.space 0x43 - (. - gText_Rom_1E19B8)
	.endif
