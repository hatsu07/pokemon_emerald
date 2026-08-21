	@ src/battle_main.c:393 battle_main_line_393 (+3 aliases)
	.globl gText_Rom_575844
gText_Rom_575844: @ 0x08575844
	.string "ライバル{EOS}"
	.if (. - gText_Rom_575844) > 0x5
	.error "gText_Rom_575844 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575844) < 0x5
	.space 0x5 - (. - gText_Rom_575844)
	.endif
