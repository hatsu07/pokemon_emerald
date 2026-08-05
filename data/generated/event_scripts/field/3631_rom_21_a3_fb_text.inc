	@ field-script:0x21A385 FieldScriptText_21A3FB
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21A3FB
gText_Rom_21A3FB: @ 0x0821A3FB
	.string "とびらは　しまっている"
	.byte EOS
	.if (. - gText_Rom_21A3FB) != 0xc
	.error "gText_Rom_21A3FB must retain its original byte length"
	.endif
