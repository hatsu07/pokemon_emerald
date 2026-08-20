	@ field-script:0x21D533 FieldScriptText_246658
	.globl gText_Rom_246658
gText_Rom_246658: @ 0x08246658
	.string "とうろくを　かいじょ　しました！{EOS}"
	.if (. - gText_Rom_246658) > 0x11
	.error "gText_Rom_246658 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_246658) < 0x11
	.space 0x11 - (. - gText_Rom_246658)
	.endif
