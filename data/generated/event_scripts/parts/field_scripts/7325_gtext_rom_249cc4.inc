	@ field-script:0x248B8A FieldScriptText_249CC4
	.globl gText_Rom_249CC4
gText_Rom_249CC4: @ 0x08249CC4
	.string "あなたの　ポケモンも　コンテストに\nさんか　させて　みませんか？$"
	.if (. - gText_Rom_249CC4) > 0x21
	.error "gText_Rom_249CC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249CC4) < 0x21
	.space 0x21 - (. - gText_Rom_249CC4)
	.endif
