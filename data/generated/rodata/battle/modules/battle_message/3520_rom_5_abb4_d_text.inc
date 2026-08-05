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
