	@ src/battle_message.c:422 battle_message_line_422
	.globl gText_Rom_5AB166
gText_Rom_5AB166: @ 0x085AB166
	.string "だめだ! ポケモンが\nボールから でてしまった!$"
	.if (. - gText_Rom_5AB166) > 0x19
	.error "gText_Rom_5AB166 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB166) < 0x19
	.space 0x19 - (. - gText_Rom_5AB166)
	.endif
