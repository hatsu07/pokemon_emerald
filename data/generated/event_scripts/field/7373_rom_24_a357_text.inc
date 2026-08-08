	@ field-script:0x24975A FieldScriptText_24A357
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24A357
gText_Rom_24A357: @ 0x0824A357
	.string "みなさん　すばらしい　アピールでした！\nこれで　すべて　しゅうりょう　です！\lおつかれさまでした！$"
	.if (. - gText_Rom_24A357) != 0x32
	.error "gText_Rom_24A357 must retain its original byte length"
	.endif
