	@ data/maps/Route104_MrBrineysHouse/scripts.inc:114 Route104_MrBrineysHouse_Text_SetSailForDewford (+1 aliases)
	.globl gText_Rom_1E8B8A
gText_Rom_1E8B8A: @ 0x081E8B8A
	.string "ハギ『ムロタウン か\pよっしゃ! いくぞ ピーコちゃん!{EOS}"
	.if (. - gText_Rom_1E8B8A) > 0x1d
	.error "gText_Rom_1E8B8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E8B8A) < 0x1d
	.space 0x1d - (. - gText_Rom_1E8B8A)
	.endif
