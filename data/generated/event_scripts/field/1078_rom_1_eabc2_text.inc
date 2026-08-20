	@ field-script:0x1EA604 FieldScriptText_1EABC2
	.globl gText_Rom_1EABC2
gText_Rom_1EABC2: @ 0x081EABC2
	.string "われら　かぞくの　こころは　ひとつ\n「カチヌキ　ファミリーの　いえ」{EOS}"
	.if (. - gText_Rom_1EABC2) > 0x23
	.error "gText_Rom_1EABC2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EABC2) < 0x23
	.space 0x23 - (. - gText_Rom_1EABC2)
	.endif
