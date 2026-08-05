	@ data/maps/VictoryRoad_B1F/scripts.inc:50 VictoryRoad_B1F_Text_MichelleDefeat (+1 aliases)
	.globl gText_Rom_219AC4
gText_Rom_219AC4: @ 0x08219AC4
	.string "その ちょうし!"
	.byte EOS
	.if (. - gText_Rom_219AC4) > 0x9
	.error "gText_Rom_219AC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219AC4) < 0x9
	.space 0x9 - (. - gText_Rom_219AC4)
	.endif
