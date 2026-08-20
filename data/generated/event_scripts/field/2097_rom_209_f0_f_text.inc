	@ field-script:0x209E4E FieldScriptText_209F0F
	.globl gText_Rom_209F0F
gText_Rom_209F0F: @ 0x08209F0F
	.string "わすれさせたい　わざが　あったら\nまた　くるのじゃぞ！{EOS}"
	.if (. - gText_Rom_209F0F) > 0x1c
	.error "gText_Rom_209F0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209F0F) < 0x1c
	.space 0x1c - (. - gText_Rom_209F0F)
	.endif
