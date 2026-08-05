	@ src/battle_message.c:431 battle_message_line_431
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB25B
gText_Rom_5AB25B: @ 0x085AB25B
	.string "すなあらしが ふきあれている$"
	.if (. - gText_Rom_5AB25B) != 0xf
	.error "gText_Rom_5AB25B must retain its original byte length"
	.endif
