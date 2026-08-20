	@ field-script:0x21D459 FieldScriptText_2465BD
	.globl gText_Rom_2465BD
gText_Rom_2465BD: @ 0x082465BD
	.string "ひみつきちの　グッズは　すべて\nパソコンに　もどります\pそれでも　よろしいですか？{EOS}"
	.if (. - gText_Rom_2465BD) > 0x2a
	.error "gText_Rom_2465BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2465BD) < 0x2a
	.space 0x2a - (. - gText_Rom_2465BD)
	.endif
