	@ field-script:0x257817 FieldScriptText_257D22
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_257D22
gText_Rom_257D22: @ 0x08257D22
	.string "そうかい　それじゃ　また　きておくれ"
	.byte EOS
	.if (. - gText_Rom_257D22) != 0x13
	.error "gText_Rom_257D22 must retain its original byte length"
	.endif
