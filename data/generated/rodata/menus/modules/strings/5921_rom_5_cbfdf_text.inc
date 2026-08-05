	@ src/strings.c:654 gText_Sour2
	.globl gText_Rom_5CBFDF
gText_Rom_5CBFDF: @ 0x085CBFDF
	.string "すっぱ$"
	.if (. - gText_Rom_5CBFDF) > 0x4
	.error "gText_Rom_5CBFDF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFDF) < 0x4
	.space 0x4 - (. - gText_Rom_5CBFDF)
	.endif
