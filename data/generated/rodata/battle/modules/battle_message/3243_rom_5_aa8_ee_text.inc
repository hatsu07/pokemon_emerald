	@ src/battle_message.c:381 battle_message_line_381
	.globl gText_Rom_5AA8EE
gText_Rom_5AA8EE: @ 0x085AA8EE
	.string "きゅうしょに あたった！$"
	.if (. - gText_Rom_5AA8EE) > 0xd
	.error "gText_Rom_5AA8EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA8EE) < 0xd
	.space 0xd - (. - gText_Rom_5AA8EE)
	.endif
