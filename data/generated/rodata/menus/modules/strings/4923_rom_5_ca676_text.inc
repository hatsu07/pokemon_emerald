	@ src/strings.c:414 gText_RegisteredDataDeleted
	.globl gText_Rom_5CA676
gText_Rom_5CA676: @ 0x085CA676
	.string "とうろくを かいじょ しました{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA676) > 0x12
	.error "gText_Rom_5CA676 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA676) < 0x12
	.space 0x12 - (. - gText_Rom_5CA676)
	.endif
