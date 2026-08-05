	@ field-script:0x21EB52 FieldScriptText_262AEF
	.globl gText_Rom_262AEF
gText_Rom_262AEF: @ 0x08262AEF
	.string "このさきは　ただいま　こうじちゅう　のため\nたちいり　きんしに　なっています$"
	.if (. - gText_Rom_262AEF) > 0x27
	.error "gText_Rom_262AEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262AEF) < 0x27
	.space 0x27 - (. - gText_Rom_262AEF)
	.endif
