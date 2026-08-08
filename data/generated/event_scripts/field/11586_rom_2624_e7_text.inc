	@ field-script:0x212A12 FieldScriptText_2624E7
	.globl gText_Rom_2624E7
gText_Rom_2624E7: @ 0x082624E7
	.string "サファリゾーンへ　ようこそ！\pここでは　ホウエンでは　なかなか\nみることの　できない　ポケモンを\pしぜんの　すがたの　まま\nめに　することが　できます\pまた　ポケモントレーナーの\nようぼうに　おこたえ　して\pポケモンを\nつかまえる　ことも　できます！\pサファリゾーンを　たのしんで　いってね！$"
	.if (. - gText_Rom_2624E7) > 0x93
	.error "gText_Rom_2624E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2624E7) < 0x93
	.space 0x93 - (. - gText_Rom_2624E7)
	.endif
