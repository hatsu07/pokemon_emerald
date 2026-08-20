	@ field-script:0x226A27 FieldScriptText_226C71
	.globl gText_Rom_226C71
gText_Rom_226C71: @ 0x08226C71
	.string "つぎは　6くみめの　あいてです\nじゅんびは　いいですか？{EOS}"
	.if (. - gText_Rom_226C71) > 0x1d
	.error "gText_Rom_226C71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_226C71) < 0x1d
	.space 0x1d - (. - gText_Rom_226C71)
	.endif
