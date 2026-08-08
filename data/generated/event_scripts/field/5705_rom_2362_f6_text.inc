	@ field-script:0x235CAE FieldScriptText_2362F6
	.globl gText_Rom_2362F6
gText_Rom_2362F6: @ 0x082362F6
	.string "キッスポスターで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_2362F6) > 0x13
	.error "gText_Rom_2362F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2362F6) < 0x13
	.space 0x13 - (. - gText_Rom_2362F6)
	.endif
