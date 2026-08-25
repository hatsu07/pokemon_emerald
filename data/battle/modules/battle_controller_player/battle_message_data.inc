
	@ src/battle_message.c:1465 gText_MoveInterfaceType (+2 aliases)
	.globl gText_MoveInterfaceType_Copy_BattleMessage
gText_MoveInterfaceType_Copy_BattleMessage: @ 0x085CA39B
	.string "タイプ/{EOS}"
	.if (. - gText_MoveInterfaceType_Copy_BattleMessage) > 0x5
	.error "gText_MoveInterfaceType_Copy_BattleMessage may not grow beyond its original slot"
	.endif
	.if (. - gText_MoveInterfaceType_Copy_BattleMessage) < 0x5
	.space 0x5 - (. - gText_MoveInterfaceType_Copy_BattleMessage)
	.endif

