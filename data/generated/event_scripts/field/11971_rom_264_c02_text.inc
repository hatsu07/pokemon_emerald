	@ field-script:0x26450C FieldScriptText_264C02
	.globl gText_Rom_264C02
gText_Rom_264C02: @ 0x08264C02
	.string "……す　す　すっ\pすっごーいっ！\nなんて　{0xFD}{0x02}！　{0xFD}{0x02}なのっ！\pここまで　{0xFD}{0x02}な　{0xFD}{0x03}が\nよのなかに　あるなんて！\pありがとう！\pいっしょう　わたしの\nたからものに　するわ！$"
	.if (. - gText_Rom_264C02) > 0x58
	.error "gText_Rom_264C02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264C02) < 0x58
	.space 0x58 - (. - gText_Rom_264C02)
	.endif
