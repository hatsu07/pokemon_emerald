	@ field-script:0x258DCE FieldScriptText_2586D2
	.globl gText_Rom_2586D2
gText_Rom_2586D2: @ 0x082586D2
	.string "しかたないなぁ　もう\pおじさんの　あまった　きのみで\nよければ　あげるよ！\pこれで　いっしょに　きのみブレンダーで\nポロックを　つくろうや"
	.byte EOS
	.if (. - gText_Rom_2586D2) > 0x46
	.error "gText_Rom_2586D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2586D2) < 0x46
	.space 0x46 - (. - gText_Rom_2586D2)
	.endif
