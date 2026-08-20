	@ field-script:0x212532 FieldScriptText_212680
	.globl gText_Rom_212680
gText_Rom_212680: @ 0x08212680
	.string "ポケモンを　マーキングすると　ボックスが\nせいり　しやすくなる　ようにする\pボックスの　なまえ　かべがみを\nかえられる　ようにして　あずけられた\lポケモンが　よろこぶ　ようにする\pつづきを　よみますか？{EOS}"
	.if (. - gText_Rom_212680) > 0x66
	.error "gText_Rom_212680 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_212680) < 0x66
	.space 0x66 - (. - gText_Rom_212680)
	.endif
