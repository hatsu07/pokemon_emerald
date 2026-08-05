	@ data/maps/RusturfTunnel/scripts.inc:463 RusturfTunnel_Text_MikeDefeat (+1 aliases)
	.globl gText_Rom_213D8C
gText_Rom_213D8C: @ 0x08213D8C
	.string "ポケモン……\nちから つきた……$"
	.if (. - gText_Rom_213D8C) > 0x11
	.error "gText_Rom_213D8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_213D8C) < 0x11
	.space 0x11 - (. - gText_Rom_213D8C)
	.endif
