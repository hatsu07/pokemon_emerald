	@ src/battle_dome.c:912 battle_dome_line_912
	.globl gText_Rom_273D74
gText_Rom_273D74: @ 0x08273D74
	.string "ダミーメッセージ2です。{EOS}"
	.if (. - gText_Rom_273D74) > 0xd
	.error "gText_Rom_273D74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273D74) < 0xd
	.space 0xd - (. - gText_Rom_273D74)
	.endif
