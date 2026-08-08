	@ field-script:0x212B16 FieldScriptText_26270E
	.globl gText_Rom_26270E
gText_Rom_26270E: @ 0x0826270E
	.string "あ！　おきゃくさん\nポロックケースを　おもちで　ないですね？\pサファリゾーンは　ポロックを　つかうと\nより　おたのしみ　いただけますので\pぜひ　ポロックケースを\nおもちに　なって　おこし　ください\pポロックケースは\nミナモシティの　コンテストかいじょうで\lうけとることが　できますよ$"
	.if (. - gText_Rom_26270E) > 0x8e
	.error "gText_Rom_26270E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26270E) < 0x8e
	.space 0x8e - (. - gText_Rom_26270E)
	.endif
