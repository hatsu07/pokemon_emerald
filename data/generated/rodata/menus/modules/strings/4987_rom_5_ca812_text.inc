	@ src/strings.c:445 gText_DecorationWillBeDiscarded
	.globl gText_Rom_5CA812
gText_Rom_5CA812: @ 0x085CA812
	.string "{STR_VAR_1} は なくなりますが\nよろしい ですか?$"
	.if (. - gText_Rom_5CA812) > 0x17
	.error "gText_Rom_5CA812 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA812) < 0x17
	.space 0x17 - (. - gText_Rom_5CA812)
	.endif
