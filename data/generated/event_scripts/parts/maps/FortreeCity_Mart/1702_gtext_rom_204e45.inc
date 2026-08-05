	@ data/maps/FortreeCity_Mart/scripts.inc:43 FortreeCity_Mart_Text_StockUpOnItems
	.globl gText_Rom_204E45
gText_Rom_204E45: @ 0x08204E45
	.string "もしも ってことが あるかも しれないし\nどうぐは おおめに かうように してるのよ$"
	.if (. - gText_Rom_204E45) > 0x2b
	.error "gText_Rom_204E45 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204E45) < 0x2b
	.space 0x2b - (. - gText_Rom_204E45)
	.endif
