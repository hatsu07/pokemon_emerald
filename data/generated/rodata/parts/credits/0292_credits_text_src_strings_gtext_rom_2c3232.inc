	@ src/strings.c:1033 gText_F703Players
	.globl gText_Rom_2C3232
gText_Rom_2C3232: @ 0x082C3232
	.string "{DYNAMIC 3}にん$"
	.if (. - gText_Rom_2C3232) > 0x5
	.error "gText_Rom_2C3232 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C3232) < 0x5
	.space 0x5 - (. - gText_Rom_2C3232)
	.endif
	.space 0x1, 0x00
