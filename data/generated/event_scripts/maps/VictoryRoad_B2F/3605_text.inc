	@ data/maps/VictoryRoad_B2F/scripts.inc:55 VictoryRoad_B2F_Text_CarolineDefeat (+1 aliases)
	.globl gText_Rom_219D29
gText_Rom_219D29: @ 0x08219D29
	.string "ぜんぜん へばってないわ!"
	.byte EOS
	.if (. - gText_Rom_219D29) > 0xe
	.error "gText_Rom_219D29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219D29) < 0xe
	.space 0xe - (. - gText_Rom_219D29)
	.endif
