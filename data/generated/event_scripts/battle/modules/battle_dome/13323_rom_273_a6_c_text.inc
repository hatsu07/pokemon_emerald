	@ src/battle_dome.c:873 battle_dome_line_873
	.globl gText_Rom_273A6C
gText_Rom_273A6C: @ 0x08273A6C
	.string "ぜんたいの なかで したの レベルの チーム。$"
	.if (. - gText_Rom_273A6C) > 0x18
	.error "gText_Rom_273A6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273A6C) < 0x18
	.space 0x18 - (. - gText_Rom_273A6C)
	.endif
