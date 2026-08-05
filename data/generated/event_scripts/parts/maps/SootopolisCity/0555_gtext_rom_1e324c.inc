	@ data/maps/SootopolisCity/scripts.inc:1471 SootopolisCity_Text_NightSkyFavoriteScenery
	.globl gText_Rom_1E324C
gText_Rom_1E324C: @ 0x081E324C
	.string "かざんの かこう という\nわっかに かこまれた まるい よぞら\pその なかでは たくさんの ほしが\nいきている みたいに またたくの……\lわたしが いちばん すきな けしき$"
	.if (. - gText_Rom_1E324C) > 0x57
	.error "gText_Rom_1E324C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E324C) < 0x57
	.space 0x57 - (. - gText_Rom_1E324C)
	.endif
