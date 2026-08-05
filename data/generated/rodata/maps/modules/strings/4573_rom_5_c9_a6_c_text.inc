	@ src/strings.c:241 gText_ICanPayVar1
	.globl gText_Rom_5C9A6C
gText_Rom_5C9A6C: @ 0x085C9A6C
	.string "{STR_VAR_1}円で ひきとらせて いただきます\nよろしいですか?$"
	.if (. - gText_Rom_5C9A6C) > 0x1c
	.error "gText_Rom_5C9A6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9A6C) < 0x1c
	.space 0x1c - (. - gText_Rom_5C9A6C)
	.endif
