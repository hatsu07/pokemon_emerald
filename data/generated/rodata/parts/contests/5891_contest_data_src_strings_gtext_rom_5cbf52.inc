	@ src/strings.c:647 gText_SaveFailed
	.globl gText_Rom_5CBF52
gText_Rom_5CBF52: @ 0x085CBF52
	.string "レポートの かきこみに\nしっぱい しました…$"
	.if (. - gText_Rom_5CBF52) > 0x17
	.error "gText_Rom_5CBF52 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBF52) < 0x17
	.space 0x17 - (. - gText_Rom_5CBF52)
	.endif
