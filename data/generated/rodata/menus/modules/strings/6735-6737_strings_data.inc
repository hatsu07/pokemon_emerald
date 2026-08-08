	@ src/strings.c:892 gText_WinStreak
	.globl gText_Rom_5DD41D
gText_Rom_5DD41D: @ 0x085DD41D
	.string "{STR_VAR_1}れんしょう$"
	.if (. - gText_Rom_5DD41D) > 0x8
	.error "gText_Rom_5DD41D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD41D) < 0x8
	.space 0x8 - (. - gText_Rom_5DD41D)
	.endif
	.globl gUnknown_85DD425
gUnknown_85DD425: @ 0x085DD425

	@ src/strings.c:893 gText_Current
	.globl gText_Rom_5DD425
gText_Rom_5DD425: @ 0x085DD425
	.string "げんざい$"
	.if (. - gText_Rom_5DD425) > 0x5
	.error "gText_Rom_5DD425 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD425) < 0x5
	.space 0x5 - (. - gText_Rom_5DD425)
	.endif
