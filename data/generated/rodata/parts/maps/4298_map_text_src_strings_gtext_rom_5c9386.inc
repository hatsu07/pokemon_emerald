	@ src/strings.c:127 gText_ConfirmStarterChoice
	.globl gText_Rom_5C9386
gText_Rom_5C9386: @ 0x085C9386
	.string "このポケモンにしますか?$"
	.if (. - gText_Rom_5C9386) > 0xd
	.error "gText_Rom_5C9386 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9386) < 0xd
	.space 0xd - (. - gText_Rom_5C9386)
	.endif
