	@ src/strings.c:1032 gText_F702Players
	.globl gText_Rom_2C322C
gText_Rom_2C322C: @ 0x082C322C
	.string "{DYNAMIC 2}にん$"
	.if (. - gText_Rom_2C322C) > 0x5
	.error "gText_Rom_2C322C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C322C) < 0x5
	.space 0x5 - (. - gText_Rom_2C322C)
	.endif
	.space 0x1, 0x00
