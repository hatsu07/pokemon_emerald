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
