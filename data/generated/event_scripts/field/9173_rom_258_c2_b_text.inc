	@ field-script:0x2591E3 FieldScriptText_258C2B
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_258C2B
gText_Rom_258C2B: @ 0x08258C2B
	.string "きのみが　ないので\nきのみブレンダーは　つかえません"
	.byte EOS
	.if (. - gText_Rom_258C2B) != 0x1b
	.error "gText_Rom_258C2B must retain its original byte length"
	.endif
