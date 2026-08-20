	@ field-script:0x211B77 FieldScriptText_211CE6
	.globl gText_Rom_211CE6
gText_Rom_211CE6: @ 0x08211CE6
	.string "あんたが　いくら　つよくても\nわしの　まごに　あったら\lかてなくて　なきだすこと　じゃろう……\pわしら　かぞくが　しってる　トレーナーの\nだれよりも　つよかった　からのう！\pまごの　やつも　いまごろは\nポケモンリーグの　チャンピオンに\lちょうせん　しているの　じゃろうか？\pそれとも　わしの　まご　じゃから\nもう　チャンピオン　かもな……　ウヒヒ！{EOS}"
	.if (. - gText_Rom_211CE6) > 0xaf
	.error "gText_Rom_211CE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_211CE6) < 0xaf
	.space 0xaf - (. - gText_Rom_211CE6)
	.endif
