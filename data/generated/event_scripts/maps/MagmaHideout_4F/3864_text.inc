	@ data/maps/MagmaHideout_4F/scripts.inc:146 MagmaHideout_4F_Text_Grunt12Defeat (+1 aliases)
	.globl gText_Rom_21CAB8
gText_Rom_21CAB8: @ 0x0821CAB8
	.string "ぐうう ここまで きていながら!"
	.byte EOS
	.if (. - gText_Rom_21CAB8) > 0x11
	.error "gText_Rom_21CAB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CAB8) < 0x11
	.space 0x11 - (. - gText_Rom_21CAB8)
	.endif
