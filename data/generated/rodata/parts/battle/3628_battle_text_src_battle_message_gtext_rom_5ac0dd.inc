	@ src/battle_message.c:1554 gText_RecordBattleToPass
	.globl gText_Rom_5AC0DD
gText_Rom_5AC0DD: @ 0x085AC0DD
	.string "いまの たたかいを フロンティアパスに\nきろく しますか?$"
	.if (. - gText_Rom_5AC0DD) > 0x1e
	.error "gText_Rom_5AC0DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AC0DD) < 0x1e
	.space 0x1e - (. - gText_Rom_5AC0DD)
	.endif
