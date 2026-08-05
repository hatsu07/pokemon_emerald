	@ src/strings.c:231 gText_ThanksIllSendItHome
	.globl gText_Rom_5C9998
gText_Rom_5C9998: @ 0x085C9998
	.string "どうも ありがとう!\nじたくの パソコンに おくって おくね!$"
	.if (. - gText_Rom_5C9998) > 0x20
	.error "gText_Rom_5C9998 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9998) < 0x20
	.space 0x20 - (. - gText_Rom_5C9998)
	.endif
