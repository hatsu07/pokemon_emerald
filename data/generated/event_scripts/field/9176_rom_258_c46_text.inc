	@ field-script:0x259294 FieldScriptText_258C46
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_258C46
gText_Rom_258C46: @ 0x08258C46
	.string "ポロックケースが　いっぱい　なので\nきのみブレンダーは　つかえません"
	.byte EOS
	.if (. - gText_Rom_258C46) != 0x23
	.error "gText_Rom_258C46 must retain its original byte length"
	.endif
