	@ field-script:0x235FAE FieldScriptText_236419
	.globl gText_Rom_236419
gText_Rom_236419: @ 0x08236419
	.string "タウリンで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_236419) > 0x10
	.error "gText_Rom_236419 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236419) < 0x10
	.space 0x10 - (. - gText_Rom_236419)
	.endif
