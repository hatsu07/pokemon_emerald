	@ src/strings.c:165 gText_ThrewAwayVar2Var1s
	.globl gText_Rom_5C9532
gText_Rom_5C9532: @ 0x085C9532
	.string "{STR_VAR_1}を\n{STR_VAR_2}コ すてました$"
	.if (. - gText_Rom_5C9532) > 0xe
	.error "gText_Rom_5C9532 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9532) < 0xe
	.space 0xe - (. - gText_Rom_5C9532)
	.endif
