	@ data/maps/VictoryRoad_1F/scripts.inc:160 VictoryRoad_1F_Text_HopeDefeat (+1 aliases)
	.globl gText_Rom_21987F
gText_Rom_21987F: @ 0x0821987F
	.string "すばらしい たたかいかた ね……"
	.byte EOS
	.if (. - gText_Rom_21987F) > 0x11
	.error "gText_Rom_21987F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21987F) < 0x11
	.space 0x11 - (. - gText_Rom_21987F)
	.endif
