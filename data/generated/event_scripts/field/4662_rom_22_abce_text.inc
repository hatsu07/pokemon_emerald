	@ field-script:0x229E12 FieldScriptText_22ABCE
	.globl gText_Rom_22ABCE
gText_Rom_22ABCE: @ 0x0822ABCE
	.string "パレスガーディアンを　たおし\n7にんぬきを　たっせいするとは……{EOS}"
	.if (. - gText_Rom_22ABCE) > 0x21
	.error "gText_Rom_22ABCE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22ABCE) < 0x21
	.space 0x21 - (. - gText_Rom_22ABCE)
	.endif
