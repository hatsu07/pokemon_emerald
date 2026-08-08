	@ data/maps/VictoryRoad_B2F/scripts.inc:70 VictoryRoad_B2F_Text_FelixIntro (+1 aliases)
	.globl gText_Rom_219DCF
gText_Rom_219DCF: @ 0x08219DCF
	.string "ここまで きて\nきんちょう して おなかが いたいんです!"
	.byte EOS
	.if (. - gText_Rom_219DCF) > 0x1e
	.error "gText_Rom_219DCF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219DCF) < 0x1e
	.space 0x1e - (. - gText_Rom_219DCF)
	.endif
