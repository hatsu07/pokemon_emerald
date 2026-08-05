	@ data/maps/VictoryRoad_B1F/scripts.inc:41 VictoryRoad_B1F_Text_ShannonDefeat (+1 aliases)
	.globl gText_Rom_219A5F
gText_Rom_219A5F: @ 0x08219A5F
	.string "しんらい かんけい バッチリね!"
	.byte EOS
	.if (. - gText_Rom_219A5F) > 0x11
	.error "gText_Rom_219A5F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219A5F) < 0x11
	.space 0x11 - (. - gText_Rom_219A5F)
	.endif
