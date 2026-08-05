	@ src/battle_dome.c:914 battle_dome_line_914
	.globl gText_Rom_273D8E
gText_Rom_273D8E: @ 0x08273D8E
	.string "ダミーメッセージ4です。$"
	.if (. - gText_Rom_273D8E) > 0xd
	.error "gText_Rom_273D8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273D8E) < 0xd
	.space 0xd - (. - gText_Rom_273D8E)
	.endif
