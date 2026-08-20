	@ field-script:0x24977D FieldScriptText_24A389
	.globl gText_Rom_24A389
gText_Rom_24A389: @ 0x0824A389
	.string "さて　のこるは\nドキドキの　けっかはっぴょう　ですね！\lはっぴょうは　しんさいんの　ほうから\lおこなわれます！{EOS}"
	.if (. - gText_Rom_24A389) > 0x38
	.error "gText_Rom_24A389 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A389) < 0x38
	.space 0x38 - (. - gText_Rom_24A389)
	.endif
