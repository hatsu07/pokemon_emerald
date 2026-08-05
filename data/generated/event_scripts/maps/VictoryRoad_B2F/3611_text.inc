	@ data/maps/VictoryRoad_B2F/scripts.inc:64 VictoryRoad_B2F_Text_JulieDefeat (+1 aliases)
	.globl gText_Rom_219D98
gText_Rom_219D98: @ 0x08219D98
	.string "あなたの ほうが うえね!"
	.byte EOS
	.if (. - gText_Rom_219D98) > 0xe
	.error "gText_Rom_219D98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_219D98) < 0xe
	.space 0xe - (. - gText_Rom_219D98)
	.endif
