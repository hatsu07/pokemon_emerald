	@ field-script:0x206EDA FieldScriptText_24A744
	.globl gText_Rom_24A744
gText_Rom_24A744: @ 0x0824A744
	.string "コンテストに\nさんか　しますか？$"
	.if (. - gText_Rom_24A744) > 0x11
	.error "gText_Rom_24A744 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A744) < 0x11
	.space 0x11 - (. - gText_Rom_24A744)
	.endif
