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

	@ src/strings.c:392 gText_ContestMoves (+1 aliases)
	.globl gText_Rom_5F7C57
gText_Rom_5F7C57: @ 0x085F7C57
	.string "コンテストわざ$"
	.if (. - gText_Rom_5F7C57) > 0x8
	.error "gText_Rom_5F7C57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7C57) < 0x8
	.space 0x8 - (. - gText_Rom_5F7C57)
	.endif
