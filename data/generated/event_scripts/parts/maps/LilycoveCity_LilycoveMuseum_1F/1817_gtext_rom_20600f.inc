	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:206 LilycoveCity_LilycoveMuseum_1F_Text_WorksOfMagnificence
	.globl gText_Rom_20600F
gText_Rom_20600F: @ 0x0820600F
	.string "うーん すばらしい さくひんだ……$"
	.if (. - gText_Rom_20600F) > 0x12
	.error "gText_Rom_20600F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20600F) < 0x12
	.space 0x12 - (. - gText_Rom_20600F)
	.endif
