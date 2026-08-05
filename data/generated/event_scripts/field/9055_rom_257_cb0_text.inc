	@ field-script:0x257841 FieldScriptText_257CB0
	.globl gText_Rom_257CB0
gText_Rom_257CB0: @ 0x08257CB0
	.string "どのこを　そだてて　みるかね？"
	.byte EOS
	.if (. - gText_Rom_257CB0) > 0x10
	.error "gText_Rom_257CB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257CB0) < 0x10
	.space 0x10 - (. - gText_Rom_257CB0)
	.endif
