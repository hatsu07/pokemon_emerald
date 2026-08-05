	@ field-script:0x1E575D FieldScriptText_1E59CC
	.globl gText_Rom_1E59CC
gText_Rom_1E59CC: @ 0x081E59CC
	.string "ハルカ『その　ゴーゴーゴーグルが　あると\n111ばん　どうろの　さばくにも\lはいれるように　なるんだよ！\pそれにしても　{0xFD}{0x01}{0xFD}{0x05}\nポケモンジムに　ちょうせん　だなんて……\pあたしに　まけたくない　からって\nがんばって　いるのね！\pじゃあ　あたし　トウカで　{0xFD}{0x01}{0xFD}{0x05}の\nおとうさんに　ちょうせん　しようかな？\p{0xFD}{0x01}{0xFD}{0x05}　じゃあ　またね！$"
	.if (. - gText_Rom_1E59CC) > 0xa8
	.error "gText_Rom_1E59CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E59CC) < 0xa8
	.space 0xa8 - (. - gText_Rom_1E59CC)
	.endif
