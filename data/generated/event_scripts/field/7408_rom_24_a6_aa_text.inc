	@ field-script:0x2071E4 FieldScriptText_24A6AA
	.globl gText_Rom_24A6AA
gText_Rom_24A6AA: @ 0x0824A6AA
	.string "それでは　おきゃくさまの　ポケモンを\nエントリー　します！\pおきゃくさまの　エントリーナンバーは\n{0xFD}{0x03}ばん　に　なります！$"
	.if (. - gText_Rom_24A6AA) > 0x3e
	.error "gText_Rom_24A6AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A6AA) < 0x3e
	.space 0x3e - (. - gText_Rom_24A6AA)
	.endif
