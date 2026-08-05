	@ src/battle_message.c:397 battle_message_line_397
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AAB01
gText_Rom_5AAB01: @ 0x085AAB01
	.string "あめが ふりつづいている$"
	.if (. - gText_Rom_5AAB01) != 0xd
	.error "gText_Rom_5AAB01 must retain its original byte length"
	.endif
