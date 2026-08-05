	@ src/strings.c:1031 gText_F701Players
	.globl gText_Rom_2C3226
gText_Rom_2C3226: @ 0x082C3226
	.string "{DYNAMIC 1}にん$"
	.if (. - gText_Rom_2C3226) > 0x5
	.error "gText_Rom_2C3226 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C3226) < 0x5
	.space 0x5 - (. - gText_Rom_2C3226)
	.endif
	.space 0x1, 0x00
