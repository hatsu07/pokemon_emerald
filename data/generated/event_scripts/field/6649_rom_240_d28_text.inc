	@ field-script:0x240834 FieldScriptText_240D28
	.globl gText_Rom_240D28
gText_Rom_240D28: @ 0x08240D28
	.string "かざんばい　あるのかね　ペコペコ！\nどれどれ　みせてごらん　ペコポコ！{EOS}"
	.if (. - gText_Rom_240D28) > 0x24
	.error "gText_Rom_240D28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240D28) < 0x24
	.space 0x24 - (. - gText_Rom_240D28)
	.endif
