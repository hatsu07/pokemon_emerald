	@ field-script:0x240853 FieldScriptText_240F39
	.globl gText_Rom_240F39
gText_Rom_240F39: @ 0x08240F39
	.string "あら？\nはいぶくろ　もっていないのか　ペコペコ\pもちあるかないと\nかざんばい　たまらないよ　ペコペコ$"
	.if (. - gText_Rom_240F39) > 0x33
	.error "gText_Rom_240F39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240F39) < 0x33
	.space 0x33 - (. - gText_Rom_240F39)
	.endif
