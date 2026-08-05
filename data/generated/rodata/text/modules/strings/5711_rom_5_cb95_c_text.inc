	@ src/strings.c:558 gText_TheMailMessage
	.globl gText_Rom_5CB95C
gText_Rom_5CB95C: @ 0x085CB95C
	.string "メールに のせる メッセージは$"
	.if (. - gText_Rom_5CB95C) > 0x10
	.error "gText_Rom_5CB95C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB95C) < 0x10
	.space 0x10 - (. - gText_Rom_5CB95C)
	.endif
