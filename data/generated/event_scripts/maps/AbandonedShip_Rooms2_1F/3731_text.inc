	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:103 AbandonedShip_Rooms2_1F_Text_JaniIntro (+1 aliases)
	.globl gText_Rom_21B195
gText_Rom_21B195: @ 0x0821B195
	.string "およぐの ヘタだけど\nしょうぶは つよいもーん"
	.byte EOS
	.if (. - gText_Rom_21B195) > 0x18
	.error "gText_Rom_21B195 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B195) < 0x18
	.space 0x18 - (. - gText_Rom_21B195)
	.endif
