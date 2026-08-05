	@ src/strings.c:232 gText_YouDontHaveMoney
	.globl gText_Rom_5C99B8
gText_Rom_5C99B8: @ 0x085C99B8
	.string "おかねが たりないですよ!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C99B8) > 0x10
	.error "gText_Rom_5C99B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C99B8) < 0x10
	.space 0x10 - (. - gText_Rom_5C99B8)
	.endif
