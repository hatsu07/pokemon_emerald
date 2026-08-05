	@ src/strings.c:303 gText_ItemThrownAway
	.globl gText_Rom_5CA018
gText_Rom_5CA018: @ 0x085CA018
	.string "{STR_VAR_1}を\nすてました{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA018) > 0xc
	.error "gText_Rom_5CA018 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA018) < 0xc
	.space 0xc - (. - gText_Rom_5CA018)
	.endif
