	@ field-script:0x258F96 FieldScriptText_258A72
	.globl gText_Rom_258A72
gText_Rom_258A72: @ 0x08258A72
	.string "あなた　きのみを　もってないわね\pきのみが　ないと　ポロックは\nつくれないのよ……\pおばさん　たち　いつでも　ここで\nポロックを　つくっているから\lきのみを　みつけたら　また　やろうね！"
	.byte EOS
	.if (. - gText_Rom_258A72) > 0x5e
	.error "gText_Rom_258A72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258A72) < 0x5e
	.space 0x5e - (. - gText_Rom_258A72)
	.endif
