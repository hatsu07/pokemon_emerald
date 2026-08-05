	@ field-script:0x2407F7 FieldScriptText_240C51
	.globl gText_Rom_240C51
gText_Rom_240C51: @ 0x08240C51
	.string "この　あたりは\nかざんばい　だらけ　ペコペコ！\pわたし　すごいよ　ペコペコ\pかざんばいを　ガラスに　してね\nそれで　どうぐ　つくるよ　ペコペコ！\pきみも　これで\nかざんばいを　あつめなさい　ペコペコ！$"
	.if (. - gText_Rom_240C51) > 0x65
	.error "gText_Rom_240C51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240C51) < 0x65
	.space 0x65 - (. - gText_Rom_240C51)
	.endif
