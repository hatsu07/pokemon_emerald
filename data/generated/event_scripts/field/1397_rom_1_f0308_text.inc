	@ field-script:0x24311E FieldScriptText_1F0308
	.globl gText_Rom_1F0308
gText_Rom_1F0308: @ 0x081F0308
	.string "{0xFD}{0x01}は　ホウエンちほうの\nタウンマップに　かおを　ちかづけた！$"
	.if (. - gText_Rom_1F0308) > 0x20
	.error "gText_Rom_1F0308 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0308) < 0x20
	.space 0x20 - (. - gText_Rom_1F0308)
	.endif
