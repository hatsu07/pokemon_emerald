	@ src/battle_dome.c:1007 battle_dome_line_1007
	.globl gText_Rom_2741C6
gText_Rom_2741C6: @ 0x082741C6
	.string "わざを つかわずに {STR_VAR_1} ゆうしょう!{EOS}"
	.if (. - gText_Rom_2741C6) > 0x14
	.error "gText_Rom_2741C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2741C6) < 0x14
	.space 0x14 - (. - gText_Rom_2741C6)
	.endif
