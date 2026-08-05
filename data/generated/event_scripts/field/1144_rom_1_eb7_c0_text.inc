	@ field-script:0x1EB56C FieldScriptText_1EB7C0
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1EB7C0
gText_Rom_1EB7C0: @ 0x081EB7C0
	.string "ここは　りゅうせいのたき\nとおりぬけると　カナズミシティ$"
	.if (. - gText_Rom_1EB7C0) != 0x1d
	.error "gText_Rom_1EB7C0 must retain its original byte length"
	.endif
