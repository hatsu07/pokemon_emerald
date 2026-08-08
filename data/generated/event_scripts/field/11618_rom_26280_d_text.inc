	@ field-script:0x21EAD2 FieldScriptText_26280D
	.globl gText_Rom_26280D
gText_Rom_26280D: @ 0x0826280D
	.string "それでは　いってらっしゃい！\lなにか　ありましたら\nわたしに　こえを　かけて　くださいね$"
	.if (. - gText_Rom_26280D) > 0x2d
	.error "gText_Rom_26280D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26280D) < 0x2d
	.space 0x2d - (. - gText_Rom_26280D)
	.endif
