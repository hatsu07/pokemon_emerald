	@ src/battle_message.c:1518 gText_Body
	.globl gText_Rom_5ABDAA
gText_Rom_5ABDAA: @ 0x085ABDAA
	.string "からだ$"
	.if (. - gText_Rom_5ABDAA) > 0x4
	.error "gText_Rom_5ABDAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABDAA) < 0x4
	.space 0x4 - (. - gText_Rom_5ABDAA)
	.endif
