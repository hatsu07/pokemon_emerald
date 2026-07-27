	@ src/battle_message.c:1458 gText_WhatWillPkmnDo2
	.globl gText_Rom_5ABB4D
gText_Rom_5ABB4D: @ 0x085ABB4D
	.string "{B_PLAYER_NAME}は どうする？$"
	.if (. - gText_Rom_5ABB4D) > 0xa
	.error "gText_Rom_5ABB4D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABB4D) < 0xa
	.space 0xa - (. - gText_Rom_5ABB4D)
	.endif
	.globl gUnknown_85ABB57
gUnknown_85ABB57: @ 0x085ABB57

	@ src/battle_message.c:1459 gText_WhatWillWallyDo
	.globl gText_Rom_5ABB57
gText_Rom_5ABB57: @ 0x085ABB57
	.string "ミツルは どうする？$"
	.if (. - gText_Rom_5ABB57) > 0xb
	.error "gText_Rom_5ABB57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABB57) < 0xb
	.space 0xb - (. - gText_Rom_5ABB57)
	.endif
	.globl gUnknown_85ABB62
gUnknown_85ABB62: @ 0x085ABB62

	@ src/battle_message.c:1460 gText_LinkStandby
	.globl gText_Rom_5ABB62
gText_Rom_5ABB62: @ 0x085ABB62
	.string "{PAUSE 16}つうしんたいきちゅう……$"
	.if (. - gText_Rom_5ABB62) > 0x10
	.error "gText_Rom_5ABB62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABB62) < 0x10
	.space 0x10 - (. - gText_Rom_5ABB62)
	.endif
	.globl gUnknown_85ABB72
gUnknown_85ABB72: @ 0x085ABB72
	.incbin "baserom.gba", 0x5abb72, 0x14
	.globl gUnknown_85ABB86
gUnknown_85ABB86: @ 0x085ABB86
	.incbin "baserom.gba", 0x5abb86, 0x15
	.globl gUnknown_85ABB9B
gUnknown_85ABB9B: @ 0x085ABB9B

