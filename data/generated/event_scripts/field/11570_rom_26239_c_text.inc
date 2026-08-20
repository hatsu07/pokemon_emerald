	@ field-script:0x262395 FieldScriptText_26239C
	.globl gText_Rom_26239C
gText_Rom_26239C: @ 0x0826239C
	.string "スプレーのこうかが　きれた{EOS}"
	.if (. - gText_Rom_26239C) > 0xe
	.error "gText_Rom_26239C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26239C) < 0xe
	.space 0xe - (. - gText_Rom_26239C)
	.endif
