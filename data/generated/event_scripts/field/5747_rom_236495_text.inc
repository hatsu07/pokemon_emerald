	@ field-script:0x236143 FieldScriptText_236495
	.globl gText_Rom_236495
gText_Rom_236495: @ 0x08236495
	.string "しろいハーブで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_236495) > 0x12
	.error "gText_Rom_236495 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236495) < 0x12
	.space 0x12 - (. - gText_Rom_236495)
	.endif
