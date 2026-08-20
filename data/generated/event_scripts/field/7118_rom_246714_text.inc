	@ field-script:0x21D5B6 FieldScriptText_246714
	.globl gText_Rom_246714
gText_Rom_246714: @ 0x08246714
	.string "ほんもの　そっくりの　オモチャのテレビ\nしらない　ひとが　みたら　まちがうかも！？{EOS}"
	.if (. - gText_Rom_246714) > 0x2a
	.error "gText_Rom_246714 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_246714) < 0x2a
	.space 0x2a - (. - gText_Rom_246714)
	.endif
