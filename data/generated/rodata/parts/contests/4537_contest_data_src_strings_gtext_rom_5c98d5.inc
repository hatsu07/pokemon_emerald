	@ src/strings.c:222 gText_InBagVar1
	.globl gText_Rom_5C98D5
gText_Rom_5C98D5: @ 0x085C98D5
	.string "もってるかず {STR_VAR_1}コ$"
	.if (. - gText_Rom_5C98D5) > 0xb
	.error "gText_Rom_5C98D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C98D5) < 0xb
	.space 0xb - (. - gText_Rom_5C98D5)
	.endif
