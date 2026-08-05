	@ src/battle_message.c:430 battle_message_line_430
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB251
gText_Rom_5AB251: @ 0x085AB251
	.string "あめが ふっている$"
	.if (. - gText_Rom_5AB251) != 0xa
	.error "gText_Rom_5AB251 must retain its original byte length"
	.endif
