	@ field-script:0x2496BE FieldScriptText_24AC7F
	.globl gText_Rom_24AC7F
gText_Rom_24AC7F: @ 0x0824AC7F
	.string "2じ　しんさは　いよいよ\nおまちかねの　アピールタイム！\lわざで　アピール　しまくりましょうー！$"
	.if (. - gText_Rom_24AC7F) > 0x31
	.error "gText_Rom_24AC7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AC7F) < 0x31
	.space 0x31 - (. - gText_Rom_24AC7F)
	.endif
