	@ src/battle_dome.c:913 battle_dome_line_913
	.globl gText_Rom_273D81
gText_Rom_273D81: @ 0x08273D81
	.string "ダミーメッセージ3です。$"
	.if (. - gText_Rom_273D81) > 0xd
	.error "gText_Rom_273D81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273D81) < 0xd
	.space 0xd - (. - gText_Rom_273D81)
	.endif
