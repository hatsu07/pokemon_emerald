	@ src/strings.c:558 gText_TheMailMessage
	.globl gText_TheMailMessage
gText_TheMailMessage: @ 0x085CB95C
	.string "メールに のせる メッセージは{EOS}"
	.if (. - gText_TheMailMessage) > 0x10
	.error "gText_TheMailMessage may not grow beyond its original slot"
	.endif
	.if (. - gText_TheMailMessage) < 0x10
	.space 0x10 - (. - gText_TheMailMessage)
	.endif
