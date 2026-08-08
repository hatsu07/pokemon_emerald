	@ data/maps/VictoryRoad_B2F/scripts.inc:61 VictoryRoad_B2F_Text_JulieIntro (+1 aliases)
	.globl gText_Rom_219D68
gText_Rom_219D68: @ 0x08219D68
	.string "ジムバッジを たくさん もってるからって\nゆだん しないでよ\lうえには うえが いるんだから!"
	.byte EOS
	.if (. - gText_Rom_219D68) > 0x30
	.error "gText_Rom_219D68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219D68) < 0x30
	.space 0x30 - (. - gText_Rom_219D68)
	.endif
