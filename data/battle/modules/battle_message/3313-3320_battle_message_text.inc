	@ src/battle_message.c:405 battle_message_line_405
	.globl gText_Rom_5AAB68
gText_Rom_5AAB68: @ 0x085AAB68
	.string "ひざしが よわくなった!{EOS}"
	.if (. - gText_Rom_5AAB68) > 0xd
	.error "gText_Rom_5AAB68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB68) < 0xd
	.space 0xd - (. - gText_Rom_5AAB68)
	.endif

	@ src/battle_message.c:406 battle_message_line_406 (+1 aliases)
	.globl gText_Rom_5AAB75
gText_Rom_5AAB75: @ 0x085AAB75
	.string "あられが ふりはじめた!{EOS}"
	.if (. - gText_Rom_5AAB75) > 0xd
	.error "gText_Rom_5AAB75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB75) < 0xd
	.space 0xd - (. - gText_Rom_5AAB75)
	.endif

	@ src/battle_message.c:407 battle_message_line_407
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AAB82
gText_Rom_5AAB82: @ 0x085AAB82
	.string "あられが ふりつづいている{EOS}"
	.if (. - gText_Rom_5AAB82) != 0xe
	.error "gText_Rom_5AAB82 must retain its original byte length"
	.endif

	@ src/battle_message.c:408 battle_message_line_408
	.globl gText_Rom_5AAB90
gText_Rom_5AAB90: @ 0x085AAB90
	.string "あられが ふりやんだ!{EOS}"
	.if (. - gText_Rom_5AAB90) > 0xc
	.error "gText_Rom_5AAB90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB90) < 0xc
	.space 0xc - (. - gText_Rom_5AAB90)
	.endif
	@ analyzed canonical ROM range 0x085AAB9C-0x085AABA8
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0C, 0x06, 0x0C, 0x00, 0x15, 0x16, 0x23, 0x00, 0x1A, 0x07, 0x41, 0x0E, 0x15
