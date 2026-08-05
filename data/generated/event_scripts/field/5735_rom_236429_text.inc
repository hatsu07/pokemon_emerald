	@ field-script:0x235FD1 FieldScriptText_236429
	.globl gText_Rom_236429
gText_Rom_236429: @ 0x08236429
	.string "リゾチウムで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_236429) > 0x11
	.error "gText_Rom_236429 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236429) < 0x11
	.space 0x11 - (. - gText_Rom_236429)
	.endif
