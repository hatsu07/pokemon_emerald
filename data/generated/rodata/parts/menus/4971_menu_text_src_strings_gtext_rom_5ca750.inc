	@ src/strings.c:437 gText_CantBePlacedHere
	.globl gText_Rom_5CA750
gText_Rom_5CA750: @ 0x085CA750
	.string "ここには おけません!$"
	.if (. - gText_Rom_5CA750) > 0xc
	.error "gText_Rom_5CA750 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA750) < 0xc
	.space 0xc - (. - gText_Rom_5CA750)
	.endif
