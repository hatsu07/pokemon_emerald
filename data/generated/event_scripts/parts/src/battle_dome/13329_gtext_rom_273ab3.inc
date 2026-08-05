	@ src/battle_dome.c:876 battle_dome_line_876
	.globl gText_Rom_273AB3
gText_Rom_273AB3: @ 0x08273AB3
	.string "ゆうしょうから もっとも とおい チーム。$"
	.if (. - gText_Rom_273AB3) > 0x16
	.error "gText_Rom_273AB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273AB3) < 0x16
	.space 0x16 - (. - gText_Rom_273AB3)
	.endif
