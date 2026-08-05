	@ src/strings.c:838 gText_SomeoneDroppedOut
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCDCB
gText_Rom_5CCDCB: @ 0x085CCDCB
	.string "だれかが ぬけました\nつうしんを しゅうりょう します$"
	.if (. - gText_Rom_5CCDCB) != 0x1c
	.error "gText_Rom_5CCDCB must retain its original byte length"
	.endif
