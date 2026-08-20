	@ field-script:0x209DD6 FieldScriptText_209EB5
	.globl gText_Rom_209EB5
gText_Rom_209EB5: @ 0x08209EB5
	.string "どの　わざを\nわすれ　させるんじゃ？{EOS}"
	.if (. - gText_Rom_209EB5) > 0x13
	.error "gText_Rom_209EB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209EB5) < 0x13
	.space 0x13 - (. - gText_Rom_209EB5)
	.endif
