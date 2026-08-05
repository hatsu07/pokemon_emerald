	@ src/strings.c:239 gText_CantBuyKeyItem
	.globl gText_Rom_5C9A47
gText_Rom_5C9A47: @ 0x085C9A47
	.string "{STR_VAR_2}を\nかいとるわけには いきません!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9A47) > 0x16
	.error "gText_Rom_5C9A47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9A47) < 0x16
	.space 0x16 - (. - gText_Rom_5C9A47)
	.endif
