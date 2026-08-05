	@ data/maps/EverGrandeCity_SidneysRoom/scripts.inc:70 EverGrandeCity_SidneysRoom_Text_Defeat (+1 aliases)
	.globl gText_Rom_21030F
gText_Rom_21030F: @ 0x0821030F
	.string "おやおや まけちまったよ\nまっ たのしんだから いいんだけどよ$"
	.if (. - gText_Rom_21030F) > 0x20
	.error "gText_Rom_21030F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21030F) < 0x20
	.space 0x20 - (. - gText_Rom_21030F)
	.endif
