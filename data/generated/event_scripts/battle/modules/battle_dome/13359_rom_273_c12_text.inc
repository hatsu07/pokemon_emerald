	@ src/battle_dome.c:896 battle_dome_line_896
	.globl gText_Rom_273C12
gText_Rom_273C12: @ 0x08273C12
	.string "あらゆる こうげきに たえながら たたかう。{EOS}"
	.if (. - gText_Rom_273C12) > 0x17
	.error "gText_Rom_273C12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273C12) < 0x17
	.space 0x17 - (. - gText_Rom_273C12)
	.endif
