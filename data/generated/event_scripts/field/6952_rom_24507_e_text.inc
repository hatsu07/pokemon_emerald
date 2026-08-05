	@ field-script:0x245B6A FieldScriptText_24507E
	.globl gText_Rom_24507E
gText_Rom_24507E: @ 0x0824507E
	.string "ツルを　おとせば　うえに　のぼれそう\pひみつのちからを　つかいますか？$"
	.if (. - gText_Rom_24507E) > 0x24
	.error "gText_Rom_24507E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24507E) < 0x24
	.space 0x24 - (. - gText_Rom_24507E)
	.endif
