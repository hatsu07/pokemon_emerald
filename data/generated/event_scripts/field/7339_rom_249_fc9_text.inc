	@ field-script:0x248C44 FieldScriptText_249FC9
	.globl gText_Rom_249FC9
gText_Rom_249FC9: @ 0x08249FC9
	.string "どの　ポケモンを　さんか　させますか？$"
	.if (. - gText_Rom_249FC9) > 0x14
	.error "gText_Rom_249FC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249FC9) < 0x14
	.space 0x14 - (. - gText_Rom_249FC9)
	.endif
