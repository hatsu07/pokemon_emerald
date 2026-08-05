	@ field-script:0x2572AB FieldScriptText_257426
	.globl gText_Rom_257426
gText_Rom_257426: @ 0x08257426
	.string "どうかな？　きみの　プロフィール\nぼくに　おしえて　もらえないかな？"
	.byte EOS
	.if (. - gText_Rom_257426) > 0x23
	.error "gText_Rom_257426 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257426) < 0x23
	.space 0x23 - (. - gText_Rom_257426)
	.endif
