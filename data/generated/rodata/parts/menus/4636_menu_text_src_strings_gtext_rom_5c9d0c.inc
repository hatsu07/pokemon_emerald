	@ src/strings.c:269 gText_PkmnHoldingItemCantHoldMail
	.globl gText_Rom_5C9D0C
gText_Rom_5C9D0C: @ 0x085C9D0C
	.string "すでに どうぐを もっているので\nメールを もたせることが できません{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9D0C) > 0x26
	.error "gText_Rom_5C9D0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9D0C) < 0x26
	.space 0x26 - (. - gText_Rom_5C9D0C)
	.endif
