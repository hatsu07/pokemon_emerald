	@ src/battle_message.c:357 battle_message_line_357
	.globl gText_Rom_5AA3A6
gText_Rom_5AA3A6: @ 0x085AA3A6
	.string "{B_ATK_NAME_WITH_PREFIX}は あいての\nわざを ふういんした!$"
	.if (. - gText_Rom_5AA3A6) > 0x15
	.error "gText_Rom_5AA3A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA3A6) < 0x15
	.space 0x15 - (. - gText_Rom_5AA3A6)
	.endif
