	@ src/strings.c:391 gText_BattleMoves
	.globl gText_BattleMoves_Copy_Battle
gText_BattleMoves_Copy_Battle: @ 0x085F7C50
	.string "たたかうわざ{EOS}"
	.if (. - gText_BattleMoves_Copy_Battle) > 0x7
	.error "gText_BattleMoves_Copy_Battle may not grow beyond its original slot"
	.endif
	.if (. - gText_BattleMoves_Copy_Battle) < 0x7
	.space 0x7 - (. - gText_BattleMoves_Copy_Battle)
	.endif

	@ src/strings.c:392 gText_ContestMoves (+1 aliases)
	.globl gText_ContestMoves_Copy_Battle
gText_ContestMoves_Copy_Battle: @ 0x085F7C57
	.string "コンテストわざ{EOS}"
	.if (. - gText_ContestMoves_Copy_Battle) > 0x8
	.error "gText_ContestMoves_Copy_Battle may not grow beyond its original slot"
	.endif
	.if (. - gText_ContestMoves_Copy_Battle) < 0x8
	.space 0x8 - (. - gText_ContestMoves_Copy_Battle)
	.endif
