	@ src/battle_message.c:1465 gText_MoveInterfaceType (+2 aliases)
	.globl gText_MoveInterfaceType
gText_MoveInterfaceType: @ 0x085F7C5F
	.string "タイプ/{EOS}"
	.if (. - gText_MoveInterfaceType) > 0x5
	.error "gText_MoveInterfaceType may not grow beyond its original slot"
	.endif
	.if (. - gText_MoveInterfaceType) < 0x5
	.space 0x5 - (. - gText_MoveInterfaceType)
	.endif
