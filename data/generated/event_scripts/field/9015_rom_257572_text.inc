	@ field-script:0x257344 FieldScriptText_257572
	.globl gText_Rom_257572
gText_Rom_257572: @ 0x08257572
	.string "そんなあ……\pきみの　プロフィールは　さぞかし\nすてきだと　おもうんだけど　なぁ……"
	.byte EOS
	.if (. - gText_Rom_257572) > 0x2b
	.error "gText_Rom_257572 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257572) < 0x2b
	.space 0x2b - (. - gText_Rom_257572)
	.endif
