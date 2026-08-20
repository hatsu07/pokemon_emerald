	@ field-script:0x248D11 FieldScriptText_249FB5
	.globl gText_Rom_249FB5
gText_Rom_249FB5: @ 0x08249FB5
	.string "どの　コンテストに　さんか　しますか？{EOS}"
	.if (. - gText_Rom_249FB5) > 0x14
	.error "gText_Rom_249FB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249FB5) < 0x14
	.space 0x14 - (. - gText_Rom_249FB5)
	.endif
