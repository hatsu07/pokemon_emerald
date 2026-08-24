	@ field-script:0x21A385 FieldScriptText_21A3FB
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_21A3FB
FieldScriptText_21A3FB: @ 0x0821A3FB
	.string "とびらは　しまっている"
	.byte EOS
	.if (. - FieldScriptText_21A3FB) != 0xc
	.error "FieldScriptText_21A3FB must retain its original byte length"
	.endif
	@ field-script:0x21A39D FieldScriptText_21A407
	.globl FieldScriptText_21A407
FieldScriptText_21A407: @ 0x0821A407
	.string "ちかのカギを　つかいますか？"
	.byte EOS
	.if (. - FieldScriptText_21A407) > 0xf
	.error "FieldScriptText_21A407 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_21A407) < 0xf
	.space 0xf - (. - FieldScriptText_21A407)
	.endif
