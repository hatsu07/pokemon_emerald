	@ src/battle_dome.c:911 battle_dome_line_911
	.globl gText_Rom_273D67
gText_Rom_273D67: @ 0x08273D67
	.string "ダミーメッセージ1です。$"
	.if (. - gText_Rom_273D67) > 0xd
	.error "gText_Rom_273D67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273D67) < 0xd
	.space 0xd - (. - gText_Rom_273D67)
	.endif
