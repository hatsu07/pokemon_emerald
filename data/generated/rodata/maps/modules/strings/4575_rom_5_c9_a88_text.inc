	@ src/strings.c:242 gText_TurnedOverVar1ForVar2
	.globl gText_Rom_5C9A88
gText_Rom_5C9A88: @ 0x085C9A88
	.string "{STR_VAR_2} を わたして\n{STR_VAR_1}円 うけとった!$"
	.if (. - gText_Rom_5C9A88) > 0x15
	.error "gText_Rom_5C9A88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9A88) < 0x15
	.space 0x15 - (. - gText_Rom_5C9A88)
	.endif
