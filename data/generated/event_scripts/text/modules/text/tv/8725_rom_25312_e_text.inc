	@ data/text/tv.inc:1186 GabbyAndTy_Text_InterviewAgain
	.globl gText_Rom_25312E
gText_Rom_25312E: @ 0x0825312E
	.string "ところで どう?\nまた インタビュー うけてみる?"
	.byte EOS
	.if (. - gText_Rom_25312E) > 0x1a
	.error "gText_Rom_25312E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25312E) < 0x1a
	.space 0x1a - (. - gText_Rom_25312E)
	.endif
