	@ src/strings.c:604 gText_Interview
	.globl gText_Interview
gText_Interview: @ 0x085CBBF6
	.string "インタビュー{EOS}"
	.if (. - gText_Interview) > 0x7
	.error "gText_Interview may not grow beyond its original slot"
	.endif
	.if (. - gText_Interview) < 0x7
	.space 0x7 - (. - gText_Interview)
	.endif
