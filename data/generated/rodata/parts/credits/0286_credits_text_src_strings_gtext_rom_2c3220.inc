	@ src/strings.c:1030 gText_F700Players
	.globl gText_Rom_2C3220
gText_Rom_2C3220: @ 0x082C3220
	.string "{DYNAMIC 0}にん$"
	.if (. - gText_Rom_2C3220) > 0x5
	.error "gText_Rom_2C3220 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C3220) < 0x5
	.space 0x5 - (. - gText_Rom_2C3220)
	.endif
	.space 0x1, 0x00
