	@ field-script:0x25925D FieldScriptText_258C05
	.globl gText_Rom_258C05
gText_Rom_258C05: @ 0x08258C05
	.string "{0xFD}{0x02}さんと　{0xFD}{0x03}さんが\nきました"
	.byte EOS
	.if (. - gText_Rom_258C05) > 0x11
	.error "gText_Rom_258C05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258C05) < 0x11
	.space 0x11 - (. - gText_Rom_258C05)
	.endif
