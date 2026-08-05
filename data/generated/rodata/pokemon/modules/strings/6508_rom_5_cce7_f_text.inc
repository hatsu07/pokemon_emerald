	@ src/strings.c:851 gText_SomeoneDroppedOut2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCE7F
gText_Rom_5CCE7F: @ 0x085CCE7F
	.string "だれかがぬけました\nつうしんを しゅうりょうします$"
	.if (. - gText_Rom_5CCE7F) != 0x1a
	.error "gText_Rom_5CCE7F must retain its original byte length"
	.endif
