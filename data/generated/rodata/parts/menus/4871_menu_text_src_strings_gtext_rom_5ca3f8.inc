	@ src/strings.c:391 gText_BattleMoves
	.globl gText_Rom_5CA3F8
gText_Rom_5CA3F8: @ 0x085CA3F8
	.string "たたかうわざ$"
	.if (. - gText_Rom_5CA3F8) > 0x7
	.error "gText_Rom_5CA3F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3F8) < 0x7
	.space 0x7 - (. - gText_Rom_5CA3F8)
	.endif
