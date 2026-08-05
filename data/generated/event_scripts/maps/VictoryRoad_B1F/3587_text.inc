	@ data/maps/VictoryRoad_B1F/scripts.inc:68 VictoryRoad_B1F_Text_HalleDefeat (+1 aliases)
	.globl gText_Rom_219B6A
gText_Rom_219B6A: @ 0x08219B6A
	.string "ワンダフル!"
	.byte EOS
	.if (. - gText_Rom_219B6A) > 0x7
	.error "gText_Rom_219B6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219B6A) < 0x7
	.space 0x7 - (. - gText_Rom_219B6A)
	.endif
