	@ field-script:0x209DA3 FieldScriptText_209EA5
	.globl gText_Rom_209EA5
gText_Rom_209EA5: @ 0x08209EA5
	.string "どの　ポケモンに　するんじゃ？{EOS}"
	.if (. - gText_Rom_209EA5) > 0x10
	.error "gText_Rom_209EA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209EA5) < 0x10
	.space 0x10 - (. - gText_Rom_209EA5)
	.endif
