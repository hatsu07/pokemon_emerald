	@ src/strings.c:163 gText_Var1CantBeHeld
	.globl gText_Rom_5C948E
gText_Rom_5C948E: @ 0x085C948E
	.string "{STR_VAR_1}を\nもたせることは できません!$"
	.if (. - gText_Rom_5C948E) > 0x13
	.error "gText_Rom_5C948E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C948E) < 0x13
	.space 0x13 - (. - gText_Rom_5C948E)
	.endif
