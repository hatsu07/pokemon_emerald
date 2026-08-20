	@ src/battle_dome.c:946 battle_dome_line_946
	.globl gText_Rom_273FD6
gText_Rom_273FD6: @ 0x08273FD6
	.string "こうげきと ぼうぎょに ちからを いれていない!{EOS}"
	.if (. - gText_Rom_273FD6) > 0x19
	.error "gText_Rom_273FD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273FD6) < 0x19
	.space 0x19 - (. - gText_Rom_273FD6)
	.endif
