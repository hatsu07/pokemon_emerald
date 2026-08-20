	@ field-script:0x21EB64 FieldScriptText_262B4E
	.globl gText_Rom_262B4E
gText_Rom_262B4E: @ 0x08262B4E
	.string "このさきは　ただいま　こうじちゅう　のため\nたちいり　きんしに　なっています{EOS}"
	.if (. - gText_Rom_262B4E) > 0x27
	.error "gText_Rom_262B4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262B4E) < 0x27
	.space 0x27 - (. - gText_Rom_262B4E)
	.endif
