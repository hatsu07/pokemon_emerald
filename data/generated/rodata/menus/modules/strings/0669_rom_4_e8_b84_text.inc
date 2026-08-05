	@ src/strings.c:950 gText_SafariBallStock
	.globl gText_Rom_4E8B84
gText_Rom_4E8B84: @ 0x084E8B84
	.string "サファリボール\nのこり {STR_VAR_1}コ$"
	.if (. - gText_Rom_4E8B84) > 0x10
	.error "gText_Rom_4E8B84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B84) < 0x10
	.space 0x10 - (. - gText_Rom_4E8B84)
	.endif
