	@ src/strings.c:252 gText_PkmnAlreadySelected
	.globl gText_Rom_5C9B43
gText_Rom_5C9B43: @ 0x085C9B43
	.string "{STR_VAR_1}は すでに\nせんたく されています{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9B43) > 0x16
	.error "gText_Rom_5C9B43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9B43) < 0x16
	.space 0x16 - (. - gText_Rom_5C9B43)
	.endif
