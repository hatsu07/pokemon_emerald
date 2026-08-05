	@ src/strings.c:749 gText_Sorry
	.globl gText_Rom_5CC787
gText_Rom_5CC787: @ 0x085CC787
	.string "ごめん…$"
	.if (. - gText_Rom_5CC787) > 0x5
	.error "gText_Rom_5CC787 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC787) < 0x5
	.space 0x5 - (. - gText_Rom_5CC787)
	.endif
