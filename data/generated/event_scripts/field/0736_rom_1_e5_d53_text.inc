	@ field-script:0x1E58B1 FieldScriptText_1E5D53
	.globl gText_Rom_1E5D53
gText_Rom_1E5D53: @ 0x081E5D53
	.string "あたし　アスナさん　みたいに\nすてきで　つよい　ジムリーダーに　なるため\lまいにち　おんせんに　はいってるの！{EOS}"
	.if (. - gText_Rom_1E5D53) > 0x38
	.error "gText_Rom_1E5D53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5D53) < 0x38
	.space 0x38 - (. - gText_Rom_1E5D53)
	.endif
