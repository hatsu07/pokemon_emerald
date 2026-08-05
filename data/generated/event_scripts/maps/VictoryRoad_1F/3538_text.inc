	@ data/maps/VictoryRoad_1F/scripts.inc:151 VictoryRoad_1F_Text_AlbertDefeat (+1 aliases)
	.globl gText_Rom_219815
gText_Rom_219815: @ 0x08219815
	.string "まさか……\nまけたのか……?"
	.byte EOS
	.if (. - gText_Rom_219815) > 0xf
	.error "gText_Rom_219815 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219815) < 0xf
	.space 0xf - (. - gText_Rom_219815)
	.endif
