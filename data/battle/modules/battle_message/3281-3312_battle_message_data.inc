	@ src/battle_message.c:390 battle_message_line_390
	.globl gText_Rom_5AAA7D
gText_Rom_5AAA7D: @ 0x085AAA7D
	.string "にげることが できない！\p{EOS}"
	.if (. - gText_Rom_5AAA7D) > 0xe
	.error "gText_Rom_5AAA7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAA7D) < 0xe
	.space 0xe - (. - gText_Rom_5AAA7D)
	.endif

	@ src/battle_message.c:391 battle_message_line_391
	.globl gText_Rom_5AAA8B
gText_Rom_5AAA8B: @ 0x085AAA8B
	.string "オダマキ『み みすてないでくれー!』\p{EOS}"
	.if (. - gText_Rom_5AAA8B) > 0x14
	.error "gText_Rom_5AAA8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAA8B) < 0x14
	.space 0x14 - (. - gText_Rom_5AAA8B)
	.endif
	@ Decoded text from ROM range: offset=0x5AAA9F, size=0xD
	.string "しかし　なにもおこらない{EOS}"

	@ src/battle_message.c:393 battle_message_line_393
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AAAAC
gText_Rom_5AAAAC: @ 0x085AAAAC
	.string "しかし うまく きまらなかった！{EOS}"
	.if (. - gText_Rom_5AAAAC) != 0x11
	.error "gText_Rom_5AAAAC must retain its original byte length"
	.endif

	@ src/battle_message.c:394 battle_message_line_394
	.globl gText_Rom_5AAABD
gText_Rom_5AAABD: @ 0x085AAABD
	.string "わけも わからず\nじぶんを こうげきした!{EOS}"
	.if (. - gText_Rom_5AAABD) > 0x16
	.error "gText_Rom_5AAABD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAABD) < 0x16
	.space 0x16 - (. - gText_Rom_5AAABD)
	.endif
	@ analyzed canonical ROM range 0x085AAAD3-0x085AAAE9
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0C, 0x06, 0x0C, 0x00, 0x55, 0x53, 0x71, 0x37, 0x04, 0x0C, 0x1A, 0xFE, 0x0C, 0x50, 0x4B, 0x02
	.byte 0x16, 0x05, 0x2C, 0x50, 0x10, 0xAB, 0xFF
	.globl gText_Rom_5AAAEA
gText_Rom_5AAAEA: @ 0x085AAAEA
	.string "あめが ふりはじめた!{EOS}"
	.if (. - gText_Rom_5AAAEA) > 0xc
	.error "gText_Rom_5AAAEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAAEA) < 0xc
	.space 0xc - (. - gText_Rom_5AAAEA)
	.endif

	@ src/battle_message.c:396 battle_message_line_396
	.globl gText_Rom_5AAAF6
gText_Rom_5AAAF6: @ 0x085AAAF6
	.string "おおあめに なった!{EOS}"
	.if (. - gText_Rom_5AAAF6) > 0xb
	.error "gText_Rom_5AAAF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAAF6) < 0xb
	.space 0xb - (. - gText_Rom_5AAAF6)
	.endif

	@ src/battle_message.c:397 battle_message_line_397
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AAB01
gText_Rom_5AAB01: @ 0x085AAB01
	.string "あめが ふりつづいている{EOS}"
	.if (. - gText_Rom_5AAB01) != 0xd
	.error "gText_Rom_5AAB01 must retain its original byte length"
	.endif

	@ src/battle_message.c:398 battle_message_line_398
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AAB0E
gText_Rom_5AAB0E: @ 0x085AAB0E
	.string "おおあめが ふりつづいている{EOS}"
	.if (. - gText_Rom_5AAB0E) != 0xf
	.error "gText_Rom_5AAB0E must retain its original byte length"
	.endif

	@ src/battle_message.c:399 battle_message_line_399
	.globl gText_Rom_5AAB1D
gText_Rom_5AAB1D: @ 0x085AAB1D
	.string "あめが ふりやんだ!{EOS}"
	.if (. - gText_Rom_5AAB1D) > 0xb
	.error "gText_Rom_5AAB1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB1D) < 0xb
	.space 0xb - (. - gText_Rom_5AAB1D)
	.endif

	@ src/battle_message.c:400 battle_message_line_400
	.globl gText_Rom_5AAB28
gText_Rom_5AAB28: @ 0x085AAB28
	.string "すなあらしが ふきはじめた!{EOS}"
	.if (. - gText_Rom_5AAB28) > 0xf
	.error "gText_Rom_5AAB28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB28) < 0xf
	.space 0xf - (. - gText_Rom_5AAB28)
	.endif

	@ src/battle_message.c:401 battle_message_line_401
	.globl gText_Rom_5AAB37
gText_Rom_5AAB37: @ 0x085AAB37
	.string "すなあらしが ふきあれる{EOS}"
	.if (. - gText_Rom_5AAB37) > 0xd
	.error "gText_Rom_5AAB37 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB37) < 0xd
	.space 0xd - (. - gText_Rom_5AAB37)
	.endif

	@ src/battle_message.c:402 battle_message_line_402
	.globl gText_Rom_5AAB44
gText_Rom_5AAB44: @ 0x085AAB44
	.string "すなあらしが おさまった!{EOS}"
	.if (. - gText_Rom_5AAB44) > 0xe
	.error "gText_Rom_5AAB44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB44) < 0xe
	.space 0xe - (. - gText_Rom_5AAB44)
	.endif

	@ src/battle_message.c:403 battle_message_line_403
	.globl gText_Rom_5AAB52
gText_Rom_5AAB52: @ 0x085AAB52
	.string "ひざしが つよくなった!{EOS}"
	.if (. - gText_Rom_5AAB52) > 0xd
	.error "gText_Rom_5AAB52 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB52) < 0xd
	.space 0xd - (. - gText_Rom_5AAB52)
	.endif

	@ src/battle_message.c:404 battle_message_line_404
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AAB5F
gText_Rom_5AAB5F: @ 0x085AAB5F
	.string "ひざしが つよい{EOS}"
	.if (. - gText_Rom_5AAB5F) != 0x9
	.error "gText_Rom_5AAB5F must retain its original byte length"
	.endif

