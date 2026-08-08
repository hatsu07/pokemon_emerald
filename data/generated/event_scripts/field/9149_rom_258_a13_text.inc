	@ field-script:0x258FC7 FieldScriptText_258A13
	.globl gText_Rom_258A13
gText_Rom_258A13: @ 0x08258A13
	.string "あらあら！\pじゃあ　おばさんが\nやさしく　せつめいして　あげるわね！\pきのみブレンダーの　マークが\nじぶんの　ところに　きたら\lボタンを　バシッと　おすだけで　いいのよ！\lかんたん　ねー！"
	.byte EOS
	.if (. - gText_Rom_258A13) > 0x5f
	.error "gText_Rom_258A13 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258A13) < 0x5f
	.space 0x5f - (. - gText_Rom_258A13)
	.endif
