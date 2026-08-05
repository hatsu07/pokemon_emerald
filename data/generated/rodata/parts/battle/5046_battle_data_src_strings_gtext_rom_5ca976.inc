	@ src/strings.c:453 gText_NoMailHere
	.globl gText_Rom_5CA976
gText_Rom_5CA976: @ 0x085CA976
	.string "メールは 1つうも ありません{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA976) > 0x12
	.error "gText_Rom_5CA976 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA976) < 0x12
	.space 0x12 - (. - gText_Rom_5CA976)
	.endif
