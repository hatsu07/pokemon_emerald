	@ data/maps/VictoryRoad_B2F/scripts.inc:37 VictoryRoad_B2F_Text_VitoDefeat (+1 aliases)
	.globl gText_Rom_219C55
gText_Rom_219C55: @ 0x08219C55
	.string "おれの かぞく より つよい!?\nそんなことって あるのか!?"
	.byte EOS
	.if (. - gText_Rom_219C55) > 0x20
	.error "gText_Rom_219C55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219C55) < 0x20
	.space 0x20 - (. - gText_Rom_219C55)
	.endif
