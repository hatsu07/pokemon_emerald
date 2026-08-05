	@ src/strings.c:258 gText_SendMailToPC
	.globl gText_Rom_5C9BF1
gText_Rom_5C9BF1: @ 0x085C9BF1
	.string "とった メールを パソコンに\nてんそうしますか?$"
	.if (. - gText_Rom_5C9BF1) > 0x19
	.error "gText_Rom_5C9BF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9BF1) < 0x19
	.space 0x19 - (. - gText_Rom_5C9BF1)
	.endif
