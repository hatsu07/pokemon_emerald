	@ field-script:0x2579EF FieldScriptText_257D47
	.globl gText_Rom_257D47
gText_Rom_257D47: @ 0x08257D47
	.string "もう　1ぴきも　ひきとるかい？"
	.byte EOS
	.if (. - gText_Rom_257D47) > 0x10
	.error "gText_Rom_257D47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257D47) < 0x10
	.space 0x10 - (. - gText_Rom_257D47)
	.endif
