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
	@ Replaced baserom.gba range: offset=0x5ABB72, size=0x14
	.byte 0x10, 0x10, 0x06, 0x03, 0x00, 0x00, 0x96, 0xA0, 0x89, 0xFE, 0x9F, 0x59, 0x73, 0x7E, 0x00, 0x00
	.byte 0x16, 0x3A, 0x29, 0xFF
	.globl gUnknown_85ABB86
gUnknown_85ABB86: @ 0x085ABB86
	@ Replaced baserom.gba range: offset=0x5ABB86, size=0x15
	.byte 0x9A, 0xAE, 0x79, 0x00, 0x00, 0x00, 0x9F, 0x7B, 0xA0, 0x58, 0xFE, 0x11, 0x06, 0x43, 0x08, 0x00
	.byte 0x00, 0x16, 0x3A, 0x29, 0xFF
	.globl gUnknown_85ABB9B
gUnknown_85ABB9B: @ 0x085ABB9B

