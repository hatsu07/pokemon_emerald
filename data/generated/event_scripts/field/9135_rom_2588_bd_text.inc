	@ field-script:0x258EB9 FieldScriptText_2588BD
	.globl gText_Rom_2588BD
gText_Rom_2588BD: @ 0x082588BD
	.string "……と　おもったら\nきみ　きのみを　もっていない　みたいだね\pきのみが　ないと　ポロックは\nつくれないんだよ……\pおにいさん　たちは\nいつも　ここに　いるから\lきのみを　みつけたら　また　やろうね！"
	.byte EOS
	.if (. - gText_Rom_2588BD) > 0x64
	.error "gText_Rom_2588BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2588BD) < 0x64
	.space 0x64 - (. - gText_Rom_2588BD)
	.endif
