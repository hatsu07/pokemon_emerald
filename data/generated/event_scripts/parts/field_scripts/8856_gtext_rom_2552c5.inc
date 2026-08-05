	@ field-script:0x25633A FieldScriptText_2552C5
	.globl gText_Rom_2552C5
gText_Rom_2552C5: @ 0x082552C5
	.string "……うーん　ものたりない　なあ\pもっと　すごい　はなしを\nきかせて　ほしいなあ"
	.byte EOS
	.if (. - gText_Rom_2552C5) > 0x28
	.error "gText_Rom_2552C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2552C5) < 0x28
	.space 0x28 - (. - gText_Rom_2552C5)
	.endif
