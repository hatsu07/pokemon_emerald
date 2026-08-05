	@ src/battle_message.c:407 battle_message_line_407
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AAB82
gText_Rom_5AAB82: @ 0x085AAB82
	.string "あられが ふりつづいている$"
	.if (. - gText_Rom_5AAB82) != 0xe
	.error "gText_Rom_5AAB82 must retain its original byte length"
	.endif
