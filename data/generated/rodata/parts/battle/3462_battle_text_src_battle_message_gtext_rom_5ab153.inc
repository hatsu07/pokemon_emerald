	@ src/battle_message.c:421 battle_message_line_421
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB153
gText_Rom_5AB153: @ 0x085AB153
	.string "ポケモンに\nうまく あたらなかった!$"
	.if (. - gText_Rom_5AB153) != 0x13
	.error "gText_Rom_5AB153 must retain its original byte length"
	.endif
