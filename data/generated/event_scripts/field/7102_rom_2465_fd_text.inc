	@ field-script:0x21D520 FieldScriptText_2465FD
	.globl gText_Rom_2465FD
gText_Rom_2465FD: @ 0x082465FD
	.string "すでに　とうろくされています\nとうろくを　かいじょ　しますか？{EOS}"
	.if (. - gText_Rom_2465FD) > 0x20
	.error "gText_Rom_2465FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2465FD) < 0x20
	.space 0x20 - (. - gText_Rom_2465FD)
	.endif
