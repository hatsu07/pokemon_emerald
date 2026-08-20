	@ field-script:0x1E751F FieldScriptText_1E7D65
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E7D65
gText_Rom_1E7D65: @ 0x081E7D65
	.string "ここは　104ばん　どうろ\n{ESCAPE}{0x03}　トウカシティ{EOS}"
	.if (. - gText_Rom_1E7D65) != 0x19
	.error "gText_Rom_1E7D65 must retain its original byte length"
	.endif
