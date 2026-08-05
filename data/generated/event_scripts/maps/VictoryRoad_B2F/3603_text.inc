	@ data/maps/VictoryRoad_B2F/scripts.inc:52 VictoryRoad_B2F_Text_CarolineIntro (+1 aliases)
	.globl gText_Rom_219D19
gText_Rom_219D19: @ 0x08219D19
	.string "そろそろ へばって きたかな?"
	.byte EOS
	.if (. - gText_Rom_219D19) > 0x10
	.error "gText_Rom_219D19 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219D19) < 0x10
	.space 0x10 - (. - gText_Rom_219D19)
	.endif
