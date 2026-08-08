	@ field-script:0x264836 FieldScriptText_264FC8
	.globl gText_Rom_264FC8
gText_Rom_264FC8: @ 0x08264FC8
	.string "あたし　コンテスト　おねえさん！\nコンテスト　だいすきー！$"
	.if (. - gText_Rom_264FC8) > 0x1e
	.error "gText_Rom_264FC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264FC8) < 0x1e
	.space 0x1e - (. - gText_Rom_264FC8)
	.endif
