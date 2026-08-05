	@ field-script:0x2578B8 FieldScriptText_257E2F
	.globl gText_Rom_257E2F
gText_Rom_257E2F: @ 0x08257E2F
	.string "おや？　ポケモンが\n1ぴき　しか　いないようだな\pまた　きなさいよ"
	.byte EOS
	.if (. - gText_Rom_257E2F) > 0x22
	.error "gText_Rom_257E2F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257E2F) < 0x22
	.space 0x22 - (. - gText_Rom_257E2F)
	.endif
