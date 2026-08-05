	@ data/maps/VictoryRoad_B2F/scripts.inc:73 VictoryRoad_B2F_Text_FelixDefeat (+1 aliases)
	.globl gText_Rom_219DED
gText_Rom_219DED: @ 0x08219DED
	.string "ああ\n……いたい"
	.byte EOS
	.if (. - gText_Rom_219DED) > 0x9
	.error "gText_Rom_219DED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219DED) < 0x9
	.space 0x9 - (. - gText_Rom_219DED)
	.endif
