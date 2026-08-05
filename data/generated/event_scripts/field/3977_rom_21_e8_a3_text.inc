	@ field-script:0x21E5E2 FieldScriptText_21E8A3
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21E8A3
gText_Rom_21E8A3: @ 0x0821E8A3
	.string "ゆうがな　きゃくせんで\nせかい　いっしゅうも　よろしいけど……\pれんらくせんで　のんびり\nホウエンを　みるのも　すてき　ですわ"
	.byte EOS
	.if (. - gText_Rom_21E8A3) != 0x40
	.error "gText_Rom_21E8A3 must retain its original byte length"
	.endif
