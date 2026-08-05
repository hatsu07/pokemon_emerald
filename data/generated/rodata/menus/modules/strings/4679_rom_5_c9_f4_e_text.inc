	@ src/strings.c:292 gText_PkmnElevatedToLvVar2
	.globl gText_Rom_5C9F4E
gText_Rom_5C9F4E: @ 0x085C9F4E
	.string "{STR_VAR_1}の\nレベルが {STR_VAR_2}になった!$"
	.if (. - gText_Rom_5C9F4E) > 0x11
	.error "gText_Rom_5C9F4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9F4E) < 0x11
	.space 0x11 - (. - gText_Rom_5C9F4E)
	.endif
