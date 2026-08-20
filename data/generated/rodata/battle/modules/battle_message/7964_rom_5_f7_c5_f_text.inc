	@ src/battle_message.c:1465 gText_MoveInterfaceType (+2 aliases)
	.globl gText_Rom_5F7C5F
gText_Rom_5F7C5F: @ 0x085F7C5F
	.string "タイプ/{EOS}"
	.if (. - gText_Rom_5F7C5F) > 0x5
	.error "gText_Rom_5F7C5F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7C5F) < 0x5
	.space 0x5 - (. - gText_Rom_5F7C5F)
	.endif
