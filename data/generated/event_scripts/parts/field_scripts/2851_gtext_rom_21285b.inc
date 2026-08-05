	@ field-script:0x21282C FieldScriptText_21285B
	.globl gText_Rom_21285B
gText_Rom_21285B: @ 0x0821285B
	.string "あの　カナシダトンネル……\pはじめは　たくさんの　にんげんと\nさいしんの　キカイで　ほりすすんでいた\pだが　そのまま　ほりすすむと\nあたりの　ポケモンに\lあくえいきょうを　あたえる　らしくてね\pで　おれら　どうしようもなく\nここで　ぼんやりと　しているわけさ$"
	.if (. - gText_Rom_21285B) > 0x82
	.error "gText_Rom_21285B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21285B) < 0x82
	.space 0x82 - (. - gText_Rom_21285B)
	.endif
