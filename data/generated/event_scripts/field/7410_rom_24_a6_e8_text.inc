	@ field-script:0x20730A FieldScriptText_24A6E8
	.globl gText_Rom_24A6E8
gText_Rom_24A6E8: @ 0x0824A6E8
	.string "コンテストは　すぐに　はじまります！$"
	.if (. - gText_Rom_24A6E8) > 0x13
	.error "gText_Rom_24A6E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A6E8) < 0x13
	.space 0x13 - (. - gText_Rom_24A6E8)
	.endif
