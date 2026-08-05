	@ field-script:0x212528 FieldScriptText_212763
	.globl gText_Rom_212763
gText_Rom_212763: @ 0x08212763
	.string "{0xFD}{0x01}は　ノートを　とじた$"
	.if (. - gText_Rom_212763) > 0xd
	.error "gText_Rom_212763 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_212763) < 0xd
	.space 0xd - (. - gText_Rom_212763)
	.endif
