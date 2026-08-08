	@ field-script:0x212A1D FieldScriptText_26257A
	.globl gText_Rom_26257A
gText_Rom_26257A: @ 0x0826257A
	.string "サファリゾーンへ　ようこそ！\nサファリゾーンは　はじめて　ですか？$"
	.if (. - gText_Rom_26257A) > 0x22
	.error "gText_Rom_26257A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26257A) < 0x22
	.space 0x22 - (. - gText_Rom_26257A)
	.endif
