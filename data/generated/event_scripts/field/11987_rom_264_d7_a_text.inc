	@ field-script:0x26461C FieldScriptText_264D7A
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_264D7A
gText_Rom_264D7A: @ 0x08264D7A
	.string "つまんないの！　バイバイ！{EOS}"
	.if (. - gText_Rom_264D7A) != 0xe
	.error "gText_Rom_264D7A must retain its original byte length"
	.endif
