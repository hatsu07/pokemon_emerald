	@ src/strings.c:1092 gText_IfThrowAwayCardEventWontHappen
	.globl gText_Rom_2C2A94
gText_Rom_2C2A94: @ 0x082C2A94
	.string "カードをすてると できごとも\nなくなりますが よいですか?$"
	.if (. - gText_Rom_2C2A94) > 0x1e
	.error "gText_Rom_2C2A94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C2A94) < 0x1e
	.space 0x1e - (. - gText_Rom_2C2A94)
	.endif
