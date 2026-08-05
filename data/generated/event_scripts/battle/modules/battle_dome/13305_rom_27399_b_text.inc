	@ src/battle_dome.c:864 battle_dome_line_864
	.globl gText_Rom_27399B
gText_Rom_27399B: @ 0x0827399B
	.string "こんたいかい ゆうしょうこうほの 1チーム。$"
	.if (. - gText_Rom_27399B) > 0x17
	.error "gText_Rom_27399B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27399B) < 0x17
	.space 0x17 - (. - gText_Rom_27399B)
	.endif
