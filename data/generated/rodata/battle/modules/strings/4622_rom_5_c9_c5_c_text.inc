	@ src/strings.c:262 gText_RemoveMailBeforeItem
	.globl gText_Rom_5C9C5C
gText_Rom_5C9C5C: @ 0x085C9C5C
	.string "メールを はずさないと\nどうぐは もてません!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9C5C) > 0x1a
	.error "gText_Rom_5C9C5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9C5C) < 0x1a
	.space 0x1a - (. - gText_Rom_5C9C5C)
	.endif
