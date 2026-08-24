	@ src/strings.c:654 gText_Sour2
	.globl gText_Sour2
gText_Sour2: @ 0x085CBFDF
	.string "すっぱ{EOS}"
	.if (. - gText_Sour2) > 0x4
	.error "gText_Sour2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Sour2) < 0x4
	.space 0x4 - (. - gText_Sour2)
	.endif
