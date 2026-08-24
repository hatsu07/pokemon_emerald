	@ src/strings.c:619 gText_IsThisQuizOK
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_IsThisQuizOK
gText_IsThisQuizOK: @ 0x085CBCC0
	.string "クイズは これで いいですか?{EOS}"
	.if (. - gText_IsThisQuizOK) != 0x10
	.error "gText_IsThisQuizOK must retain its original byte length"
	.endif
