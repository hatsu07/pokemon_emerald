	@ field-script:0x2578C2 FieldScriptText_257E5F
	.globl gText_Rom_257E5F
gText_Rom_257E5F: @ 0x08257E5F
	.string "その　ポケモンを　あずけると\nたたかえなく　なるぞ\pまた　きなさいよ"
	.byte EOS
	.if (. - gText_Rom_257E5F) > 0x23
	.error "gText_Rom_257E5F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257E5F) < 0x23
	.space 0x23 - (. - gText_Rom_257E5F)
	.endif
