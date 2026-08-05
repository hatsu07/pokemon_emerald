	@ field-script:0x257895 FieldScriptText_257D57
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_257D57
gText_Rom_257D57: @ 0x08257D57
	.string "それじゃ　また　きておくれ"
	.byte EOS
	.if (. - gText_Rom_257D57) != 0xe
	.error "gText_Rom_257D57 must retain its original byte length"
	.endif
