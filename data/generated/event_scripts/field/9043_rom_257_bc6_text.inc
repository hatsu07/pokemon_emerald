	@ field-script:0x257772 FieldScriptText_257BC6
	.globl gText_Rom_257BC6
gText_Rom_257BC6: @ 0x08257BC6
	.string "だいじにそだてなさいよ！"
	.byte EOS
	.if (. - gText_Rom_257BC6) > 0xd
	.error "gText_Rom_257BC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257BC6) < 0xd
	.space 0xd - (. - gText_Rom_257BC6)
	.endif
