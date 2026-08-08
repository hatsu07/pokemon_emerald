	@ src/strings.c:619 gText_IsThisQuizOK
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CBCC0
gText_Rom_5CBCC0: @ 0x085CBCC0
	.string "クイズは これで いいですか?$"
	.if (. - gText_Rom_5CBCC0) != 0x10
	.error "gText_Rom_5CBCC0 must retain its original byte length"
	.endif
