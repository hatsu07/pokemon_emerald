	@ field-script:0x25644A FieldScriptText_25638A
	.globl gText_Rom_25638A
gText_Rom_25638A: @ 0x0825638A
	.string "そう…\nわし　ざんねん…"
	.byte EOS
	.if (. - gText_Rom_25638A) > 0xd
	.error "gText_Rom_25638A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25638A) < 0xd
	.space 0xd - (. - gText_Rom_25638A)
	.endif
