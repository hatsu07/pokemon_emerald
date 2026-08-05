	@ field-script:0x25791F FieldScriptText_257E51
	.globl gText_Rom_257E51
gText_Rom_257E51: @ 0x08257E51
	.string "ポケモンを　ひきとるかい？"
	.byte EOS
	.if (. - gText_Rom_257E51) > 0xe
	.error "gText_Rom_257E51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257E51) < 0xe
	.space 0xe - (. - gText_Rom_257E51)
	.endif
