	@ src/strings.c:545 gText_AndMakeAMessage (+1 aliases)
	.globl gText_Rom_5CB8E6
gText_Rom_5CB8E6: @ 0x085CB8E6
	.string "メッセージを つくろう!{EOS}"
	.if (. - gText_Rom_5CB8E6) > 0xd
	.error "gText_Rom_5CB8E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB8E6) < 0xd
	.space 0xd - (. - gText_Rom_5CB8E6)
	.endif
