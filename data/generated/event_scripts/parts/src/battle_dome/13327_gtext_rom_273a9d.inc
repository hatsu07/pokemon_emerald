	@ src/battle_dome.c:875 battle_dome_line_875
	.globl gText_Rom_273A9D
gText_Rom_273A9D: @ 0x08273A9D
	.string "ゆうしょうは かなり むずかしい チーム。$"
	.if (. - gText_Rom_273A9D) > 0x16
	.error "gText_Rom_273A9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273A9D) < 0x16
	.space 0x16 - (. - gText_Rom_273A9D)
	.endif
