	@ src/strings.c:443 gText_CantPlaceInRoom
	.globl gText_Rom_5CA7D9
gText_Rom_5CA7D9: @ 0x085CA7D9
	.string "この グッズは\nじぶんの へやには おけません!$"
	.if (. - gText_Rom_5CA7D9) > 0x19
	.error "gText_Rom_5CA7D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA7D9) < 0x19
	.space 0x19 - (. - gText_Rom_5CA7D9)
	.endif
