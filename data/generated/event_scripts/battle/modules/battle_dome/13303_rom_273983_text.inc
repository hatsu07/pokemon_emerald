	@ src/battle_dome.c:863 battle_dome_line_863
	.globl gText_Rom_273983
gText_Rom_273983: @ 0x08273983
	.string "ベスト3に はいる ちからを もった チーム。{EOS}"
	.if (. - gText_Rom_273983) > 0x18
	.error "gText_Rom_273983 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273983) < 0x18
	.space 0x18 - (. - gText_Rom_273983)
	.endif
