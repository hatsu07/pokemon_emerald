	@ src/battle_dome.c:883 battle_dome_line_883
	.globl gText_Rom_273ADD
gText_Rom_273ADD: @ 0x08273ADD
	.string "ときには はめつ かくごで たたかいを いどむ。{EOS}"
	.if (. - gText_Rom_273ADD) > 0x19
	.error "gText_Rom_273ADD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273ADD) < 0x19
	.space 0x19 - (. - gText_Rom_273ADD)
	.endif
