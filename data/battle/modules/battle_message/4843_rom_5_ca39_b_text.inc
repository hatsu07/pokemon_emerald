	@ src/battle_message.c:1465 gText_MoveInterfaceType (+2 aliases)
	.globl gText_Rom_5CA39B
gText_Rom_5CA39B: @ 0x085CA39B
	.string "タイプ/{EOS}"
	.if (. - gText_Rom_5CA39B) > 0x5
	.error "gText_Rom_5CA39B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA39B) < 0x5
	.space 0x5 - (. - gText_Rom_5CA39B)
	.endif
