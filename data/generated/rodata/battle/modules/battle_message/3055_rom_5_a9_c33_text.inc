	@ src/battle_message.c:262 battle_message_line_262
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5A9C33
gText_Rom_5A9C33: @ 0x085A9C33
	.string "{B_ATK_NAME_WITH_PREFIX}は\nそらたかく とびあがった!$"
	.if (. - gText_Rom_5A9C33) != 0x12
	.error "gText_Rom_5A9C33 must retain its original byte length"
	.endif
