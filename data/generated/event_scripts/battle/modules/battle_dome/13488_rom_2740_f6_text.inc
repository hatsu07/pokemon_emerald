	@ src/battle_dome.c:958 battle_dome_line_958
	.globl gText_Rom_2740F6
gText_Rom_2740F6: @ 0x082740F6
	.string "ぼうぎょには ちからを いれていない!{EOS}"
	.if (. - gText_Rom_2740F6) > 0x14
	.error "gText_Rom_2740F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2740F6) < 0x14
	.space 0x14 - (. - gText_Rom_2740F6)
	.endif
