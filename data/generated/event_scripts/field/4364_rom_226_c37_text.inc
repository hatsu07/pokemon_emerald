	@ field-script:0x226A19 FieldScriptText_226C37
	.globl gText_Rom_226C37
gText_Rom_226C37: @ 0x08226C37
	.string "つぎは　4くみめの　あいてです\nじゅんびは　いいですか？$"
	.if (. - gText_Rom_226C37) > 0x1d
	.error "gText_Rom_226C37 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_226C37) < 0x1d
	.space 0x1d - (. - gText_Rom_226C37)
	.endif
