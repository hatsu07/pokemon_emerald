	@ src/strings.c:233 gText_NoMoreRoomForThis
	.globl gText_Rom_5C99C8
gText_Rom_5C99C8: @ 0x085C99C8
	.string "それ いじょう\nもちきれない ですよ!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C99C8) > 0x16
	.error "gText_Rom_5C99C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C99C8) < 0x16
	.space 0x16 - (. - gText_Rom_5C99C8)
	.endif
