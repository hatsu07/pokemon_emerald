	@ src/strings.c:391 gText_BattleMoves
	.globl gText_Rom_5F7C50
gText_Rom_5F7C50: @ 0x085F7C50
	.string "たたかうわざ$"
	.if (. - gText_Rom_5F7C50) > 0x7
	.error "gText_Rom_5F7C50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7C50) < 0x7
	.space 0x7 - (. - gText_Rom_5F7C50)
	.endif
