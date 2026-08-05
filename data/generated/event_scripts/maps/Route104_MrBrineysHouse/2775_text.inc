	@ data/maps/Route104_MrBrineysHouse/scripts.inc:114 Route104_MrBrineysHouse_Text_SetSailForDewford (+1 aliases)
	.globl gText_Rom_2117FE
gText_Rom_2117FE: @ 0x082117FE
	.string "ハギ『ムロタウン か\pよっしゃ! いくぞ ピーコちゃん!$"
	.if (. - gText_Rom_2117FE) > 0x1d
	.error "gText_Rom_2117FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2117FE) < 0x1d
	.space 0x1d - (. - gText_Rom_2117FE)
	.endif
