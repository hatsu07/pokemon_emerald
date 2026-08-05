	@ src/strings.c:260 gText_PCMailboxFull
	.globl gText_Rom_5C9C20
gText_Rom_5C9C20: @ 0x085C9C20
	.string "パソコンの メールボックスが\nいっぱいです!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9C20) > 0x19
	.error "gText_Rom_5C9C20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9C20) < 0x19
	.space 0x19 - (. - gText_Rom_5C9C20)
	.endif
