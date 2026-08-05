	@ field-script:0x209DF3 FieldScriptText_209EE2
	.globl gText_Rom_209EE2
gText_Rom_209EE2: @ 0x08209EE2
	.string "むむ！\n{0xFD}{0x02}の　{0xFD}{0x03}じゃな？$"
	.if (. - gText_Rom_209EE2) > 0xf
	.error "gText_Rom_209EE2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209EE2) < 0xf
	.space 0xf - (. - gText_Rom_209EE2)
	.endif
