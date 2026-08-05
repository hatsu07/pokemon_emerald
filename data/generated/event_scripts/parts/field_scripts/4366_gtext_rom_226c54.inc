	@ field-script:0x226A20 FieldScriptText_226C54
	.globl gText_Rom_226C54
gText_Rom_226C54: @ 0x08226C54
	.string "つぎは　5くみめの　あいてです\nじゅんびは　いいですか？$"
	.if (. - gText_Rom_226C54) > 0x1d
	.error "gText_Rom_226C54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_226C54) < 0x1d
	.space 0x1d - (. - gText_Rom_226C54)
	.endif
