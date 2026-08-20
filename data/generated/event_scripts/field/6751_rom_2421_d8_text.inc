	@ field-script:0x241C77 FieldScriptText_2421D8
	.globl gText_Rom_2421D8
gText_Rom_2421D8: @ 0x082421D8
	.string "おおむかしに　つくられた　という\nいろいろな　かけら　みつかったかい？{EOS}"
	.if (. - gText_Rom_2421D8) > 0x24
	.error "gText_Rom_2421D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2421D8) < 0x24
	.space 0x24 - (. - gText_Rom_2421D8)
	.endif
