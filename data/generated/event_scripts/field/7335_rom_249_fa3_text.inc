	@ field-script:0x248C92 FieldScriptText_249FA3
	.globl gText_Rom_249FA3
gText_Rom_249FA3: @ 0x08249FA3
	.string "どの　ランクに　さんか　しますか？$"
	.if (. - gText_Rom_249FA3) > 0x12
	.error "gText_Rom_249FA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249FA3) < 0x12
	.space 0x12 - (. - gText_Rom_249FA3)
	.endif
