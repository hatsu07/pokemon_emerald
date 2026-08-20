	@ src/battle_dome.c:1005 battle_dome_line_1005
	.globl gText_Rom_27419D
gText_Rom_27419D: @ 0x0827419D
	.string "あいての リタイアで {STR_VAR_1} ゆうしょう!{EOS}"
	.if (. - gText_Rom_27419D) > 0x15
	.error "gText_Rom_27419D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27419D) < 0x15
	.space 0x15 - (. - gText_Rom_27419D)
	.endif
