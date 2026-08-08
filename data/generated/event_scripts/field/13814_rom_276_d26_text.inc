	@ field-script:0x276D3F FieldScriptText_276D26
	.globl gText_Rom_276D26
gText_Rom_276D26: @ 0x08276D26
	.string "テストよう　メッセージです！\nかんばん　です$"
	.if (. - gText_Rom_276D26) > 0x17
	.error "gText_Rom_276D26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276D26) < 0x17
	.space 0x17 - (. - gText_Rom_276D26)
	.endif
