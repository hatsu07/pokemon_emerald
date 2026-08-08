	@ field-script:0x25773E FieldScriptText_257B71
	.globl gText_Rom_257B71
gText_Rom_257B71: @ 0x08257B71
	.string "それじゃ　わしが　もらおう\nありがとよ"
	.byte EOS
	.if (. - gText_Rom_257B71) > 0x14
	.error "gText_Rom_257B71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257B71) < 0x14
	.space 0x14 - (. - gText_Rom_257B71)
	.endif
