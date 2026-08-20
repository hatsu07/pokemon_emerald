	@ field-script:0x241C66 FieldScriptText_242193
	.globl gText_Rom_242193
gText_Rom_242193: @ 0x08242193
	.string "オレは　ダイビング　トレジャーハンター！\pふかい　うみに　もぐっては\nかいていに　ねむる　おたからを　あつめる\lすげえ　やろう　なのさ！{EOS}"
	.if (. - gText_Rom_242193) > 0x45
	.error "gText_Rom_242193 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_242193) < 0x45
	.space 0x45 - (. - gText_Rom_242193)
	.endif
