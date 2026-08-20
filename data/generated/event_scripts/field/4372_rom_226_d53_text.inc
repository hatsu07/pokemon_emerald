	@ field-script:0x226B44 FieldScriptText_226D53
	.globl gText_Rom_226D53
gText_Rom_226D53: @ 0x08226D53
	.string "つうしん　たいきちゅう……{EOS}"
	.if (. - gText_Rom_226D53) > 0xe
	.error "gText_Rom_226D53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_226D53) < 0xe
	.space 0xe - (. - gText_Rom_226D53)
	.endif
