	@ src/battle_message.c:1492 gText_BattleWallyName (+8 aliases)
	.globl gText_Rom_2E7920
gText_Rom_2E7920: @ 0x082E7920
	.string "ミツル$"
	.if (. - gText_Rom_2E7920) > 0x4
	.error "gText_Rom_2E7920 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E7920) < 0x4
	.space 0x4 - (. - gText_Rom_2E7920)
	.endif
	.incbin "baserom.gba", 0x2e7924, 0x1c

