	@ src/battle_dome.c:871 battle_dome_line_871
	.globl gText_Rom_273A3D
gText_Rom_273A3D: @ 0x08273A3D
	.string "まず 1しょうが もくひょうと なる チーム。{EOS}"
	.if (. - gText_Rom_273A3D) > 0x18
	.error "gText_Rom_273A3D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273A3D) < 0x18
	.space 0x18 - (. - gText_Rom_273A3D)
	.endif
