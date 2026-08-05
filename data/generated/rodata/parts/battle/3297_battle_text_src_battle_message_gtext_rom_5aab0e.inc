	@ src/battle_message.c:398 battle_message_line_398
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AAB0E
gText_Rom_5AAB0E: @ 0x085AAB0E
	.string "おおあめが ふりつづいている$"
	.if (. - gText_Rom_5AAB0E) != 0xf
	.error "gText_Rom_5AAB0E must retain its original byte length"
	.endif
