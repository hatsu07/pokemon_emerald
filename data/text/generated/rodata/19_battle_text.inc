	@ src/battle_message.c:1492 gText_BattleWallyName (+8 aliases)
	.globl gText_Rom_2E8A40
gText_Rom_2E8A40: @ 0x082E8A40
	.string "ミツル$"
	.if (. - gText_Rom_2E8A40) > 0x4
	.error "gText_Rom_2E8A40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8A40) < 0x4
	.space 0x4 - (. - gText_Rom_2E8A40)
	.endif
	.incbin "baserom.gba", 0x2e8a44, 0x1c

	@ src/battle_message.c:1492 gText_BattleWallyName (+8 aliases)
	.globl gText_Rom_2E8A60
gText_Rom_2E8A60: @ 0x082E8A60
	.string "ミツル$"
	.if (. - gText_Rom_2E8A60) > 0x4
	.error "gText_Rom_2E8A60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8A60) < 0x4
	.space 0x4 - (. - gText_Rom_2E8A60)
	.endif
	.incbin "baserom.gba", 0x2e8a64, 0x1c

	@ src/battle_message.c:1492 gText_BattleWallyName (+8 aliases)
	.globl gText_Rom_2E8A80
gText_Rom_2E8A80: @ 0x082E8A80
	.string "ミツル$"
	.if (. - gText_Rom_2E8A80) > 0x4
	.error "gText_Rom_2E8A80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8A80) < 0x4
	.space 0x4 - (. - gText_Rom_2E8A80)
	.endif
	.incbin "baserom.gba", 0x2e8a84, 0x1c

	@ src/battle_message.c:1492 gText_BattleWallyName (+8 aliases)
	.globl gText_Rom_2E8AA0
gText_Rom_2E8AA0: @ 0x082E8AA0
	.string "ミツル$"
	.if (. - gText_Rom_2E8AA0) > 0x4
	.error "gText_Rom_2E8AA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8AA0) < 0x4
	.space 0x4 - (. - gText_Rom_2E8AA0)
	.endif
	.incbin "baserom.gba", 0x2e8aa4, 0x1c

	@ src/battle_message.c:1492 gText_BattleWallyName (+8 aliases)
	.globl gText_Rom_2E8AC0
gText_Rom_2E8AC0: @ 0x082E8AC0
	.string "ミツル$"
	.if (. - gText_Rom_2E8AC0) > 0x4
	.error "gText_Rom_2E8AC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E8AC0) < 0x4
	.space 0x4 - (. - gText_Rom_2E8AC0)
	.endif
	.incbin "baserom.gba", 0x2e8ac4, 0x1c

