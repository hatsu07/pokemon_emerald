	@ field-script:0x226A12 FieldScriptText_226C1A
	.globl gText_Rom_226C1A
gText_Rom_226C1A: @ 0x08226C1A
	.string "つぎは　3くみめの　あいてです\nじゅんびは　いいですか？$"
	.if (. - gText_Rom_226C1A) > 0x1d
	.error "gText_Rom_226C1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_226C1A) < 0x1d
	.space 0x1d - (. - gText_Rom_226C1A)
	.endif
