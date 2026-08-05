	@ src/strings.c:224 gText_Var1CertainlyHowMany
	.globl gText_Rom_5C98EC
gText_Rom_5C98EC: @ 0x085C98EC
	.string "{STR_VAR_1} を\nいくつ おかいあげに なりますか?$"
	.if (. - gText_Rom_5C98EC) > 0x17
	.error "gText_Rom_5C98EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C98EC) < 0x17
	.space 0x17 - (. - gText_Rom_5C98EC)
	.endif
