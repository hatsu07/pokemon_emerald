	@ field-script:0x2591E3 FieldScriptText_258C2B
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_258C2B
gText_Rom_258C2B: @ 0x08258C2B
	.string "きのみが　ないので\nきのみブレンダーは　つかえません"
	.byte EOS
	.if (. - gText_Rom_258C2B) != 0x1b
	.error "gText_Rom_258C2B must retain its original byte length"
	.endif
	.globl gText_Rom_258C3F
	.set gText_Rom_258C3F, gText_Rom_258C2B + 0x14
	.globl gText_Rom_258C42
	.set gText_Rom_258C42, gText_Rom_258C2B + 0x17
	@ field-script:0x259294 FieldScriptText_258C46
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_258C46
gText_Rom_258C46: @ 0x08258C46
	.string "ポロックケースが　いっぱい　なので\nきのみブレンダーは　つかえません"
	.byte EOS
	.if (. - gText_Rom_258C46) != 0x23
	.error "gText_Rom_258C46 must retain its original byte length"
	.endif
	.globl gText_Rom_258C62
	.set gText_Rom_258C62, gText_Rom_258C46 + 0x1c
	.globl gText_Rom_258C65
	.set gText_Rom_258C65, gText_Rom_258C46 + 0x1f
	@ field-script:0x25929E FieldScriptText_258C69
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_258C69
gText_Rom_258C69: @ 0x08258C69
	.string "ポロックケースが　ないので\nきのみブレンダーは　つかえません"
	.byte EOS
	.if (. - gText_Rom_258C69) != 0x1f
	.error "gText_Rom_258C69 must retain its original byte length"
	.endif
	.globl gText_Rom_258C81
	.set gText_Rom_258C81, gText_Rom_258C69 + 0x18
	.globl gText_Rom_258C84
	.set gText_Rom_258C84, gText_Rom_258C69 + 0x1b
	@ field-script:0x2590FC FieldScriptText_258C88
	.globl gText_Rom_258C88
gText_Rom_258C88: @ 0x08258C88
	.string "わしは　ポロックを\nつくるのが　だいすきで\pいつも　きのみを\nもって　きてるんだ"
	.byte EOS
	.if (. - gText_Rom_258C88) > 0x29
	.error "gText_Rom_258C88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258C88) < 0x29
	.space 0x29 - (. - gText_Rom_258C88)
	.endif
