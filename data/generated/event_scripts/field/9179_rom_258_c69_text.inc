	@ field-script:0x25929E FieldScriptText_258C69
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_258C69
gText_Rom_258C69: @ 0x08258C69
	.string "ポロックケースが　ないので\nきのみブレンダーは　つかえません"
	.byte EOS
	.if (. - gText_Rom_258C69) != 0x1f
	.error "gText_Rom_258C69 must retain its original byte length"
	.endif
