	@ src/strings.c:442 gText_MustBePlacedOnDesk
	.globl gText_Rom_5CA7B9
gText_Rom_5CA7B9: @ 0x085CA7B9
	.string "ここには おけません!\nつくえの うえなどに おいてください!$"
	.if (. - gText_Rom_5CA7B9) > 0x20
	.error "gText_Rom_5CA7B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA7B9) < 0x20
	.space 0x20 - (. - gText_Rom_5CA7B9)
	.endif
