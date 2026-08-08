	@ field-script:0x226A0B FieldScriptText_226BFD
	.globl gText_Rom_226BFD
gText_Rom_226BFD: @ 0x08226BFD
	.string "つぎは　2くみめの　あいてです\nじゅんびは　いいですか？$"
	.if (. - gText_Rom_226BFD) > 0x1d
	.error "gText_Rom_226BFD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_226BFD) < 0x1d
	.space 0x1d - (. - gText_Rom_226BFD)
	.endif
