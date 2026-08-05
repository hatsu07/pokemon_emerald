	@ src/battle_message.c:382 battle_message_line_382
	.globl gText_Rom_5AA8FB
gText_Rom_5AA8FB: @ 0x085AA8FB
	.string "いちげき ひっさつ！$"
	.if (. - gText_Rom_5AA8FB) > 0xb
	.error "gText_Rom_5AA8FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA8FB) < 0xb
	.space 0xb - (. - gText_Rom_5AA8FB)
	.endif
	@ Replaced baserom.gba range: offset=0x5AA906, size=0x3
	.byte 0xFC, 0x08, 0x20
