	@ data/maps/VictoryRoad_B1F/scripts.inc:32 VictoryRoad_B1F_Text_SamuelDefeat (+1 aliases)
	.globl gText_Rom_219A0B
gText_Rom_219A0B: @ 0x08219A0B
	.string "なにも できなかった……"
	.byte EOS
	.if (. - gText_Rom_219A0B) > 0xd
	.error "gText_Rom_219A0B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219A0B) < 0xd
	.space 0xd - (. - gText_Rom_219A0B)
	.endif
