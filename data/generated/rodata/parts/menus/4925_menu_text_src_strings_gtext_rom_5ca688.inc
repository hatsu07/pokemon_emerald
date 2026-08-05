	@ src/strings.c:415 gText_NoRegistry
	.globl gText_Rom_5CA688
gText_Rom_5CA688: @ 0x085CA688
	.string "とうろく リストは ありません{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA688) > 0x12
	.error "gText_Rom_5CA688 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA688) < 0x12
	.space 0x12 - (. - gText_Rom_5CA688)
	.endif
