	@ src/strings.c:267 gText_MailTakenFromPkmn
	.globl gText_Rom_5C9CDA
gText_Rom_5C9CDA: @ 0x085C9CDA
	.string "ポケモンから メールを\nとりました!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9CDA) > 0x15
	.error "gText_Rom_5C9CDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9CDA) < 0x15
	.space 0x15 - (. - gText_Rom_5C9CDA)
	.endif
