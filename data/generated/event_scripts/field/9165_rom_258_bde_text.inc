	@ field-script:0x25920C FieldScriptText_258BDE
	.globl gText_Rom_258BDE
gText_Rom_258BDE: @ 0x08258BDE
	.string "ともだちを　さがしています\n……Bボタンで　キャンセル"
	.byte EOS
	.if (. - gText_Rom_258BDE) > 0x1c
	.error "gText_Rom_258BDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258BDE) < 0x1c
	.space 0x1c - (. - gText_Rom_258BDE)
	.endif
