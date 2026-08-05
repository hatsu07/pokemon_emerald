	@ src/battle_message.c:1555 gText_BattleRecordedOnPass
	.globl gText_Rom_5AC0FB
gText_Rom_5AC0FB: @ 0x085AC0FB
	.string "{B_PLAYER_NAME}の たたかいが\nフロンティアパスに きろく された!$"
	.if (. - gText_Rom_5AC0FB) > 0x1d
	.error "gText_Rom_5AC0FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AC0FB) < 0x1d
	.space 0x1d - (. - gText_Rom_5AC0FB)
	.endif
