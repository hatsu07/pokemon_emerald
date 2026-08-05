	@ field-script:0x242180 FieldScriptText_2421FC
	.globl gText_Rom_2421FC
gText_Rom_2421FC: @ 0x082421FC
	.string "きみ　おたから　もってないのか……\pあかいかけら　とか\nいろいろな　かけらを　みつけたら\lこうかん　してくれよな！$"
	.if (. - gText_Rom_2421FC) > 0x3a
	.error "gText_Rom_2421FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2421FC) < 0x3a
	.space 0x3a - (. - gText_Rom_2421FC)
	.endif
