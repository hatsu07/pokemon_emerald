	@ data/maps/VictoryRoad_B2F/scripts.inc:82 VictoryRoad_B2F_Text_DianneDefeat (+1 aliases)
	.globl gText_Rom_219E56
gText_Rom_219E56: @ 0x08219E56
	.string "ぜんぜん どうじて いないわ……!"
	.byte EOS
	.if (. - gText_Rom_219E56) > 0x12
	.error "gText_Rom_219E56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219E56) < 0x12
	.space 0x12 - (. - gText_Rom_219E56)
	.endif
