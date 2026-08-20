	@ src/strings.c:875 gJPText_PleaseWaitAMoment
	.globl gText_Rom_5C8D26
gText_Rom_5C8D26: @ 0x085C8D26
	.string "しばらく おまちください{EOS}"
	.if (. - gText_Rom_5C8D26) > 0xd
	.error "gText_Rom_5C8D26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8D26) < 0xd
	.space 0xd - (. - gText_Rom_5C8D26)
	.endif
	@ Decoded text from ROM range: offset=0x5C8D33, size=0x11
	.string "レポートが　こうしんされました！{EOS}"
