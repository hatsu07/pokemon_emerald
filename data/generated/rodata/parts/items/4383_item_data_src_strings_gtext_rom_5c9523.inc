	@ src/strings.c:164 gText_TossHowManyVar1s
	.globl gText_Rom_5C9523
gText_Rom_5C9523: @ 0x085C9523
	.string "{STR_VAR_1}を\nいくつ すてますか?$"
	.if (. - gText_Rom_5C9523) > 0xf
	.error "gText_Rom_5C9523 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9523) < 0xf
	.space 0xf - (. - gText_Rom_5C9523)
	.endif
