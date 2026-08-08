	@ field-script:0x20B1A6 FieldScriptText_243A47
	.globl gText_Rom_243A47
gText_Rom_243A47: @ 0x08243A47
	.string "ミナモ　デパートへ　ようこそ！\pなんかいへ　いきますか？$"
	.if (. - gText_Rom_243A47) > 0x1d
	.error "gText_Rom_243A47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243A47) < 0x1d
	.space 0x1d - (. - gText_Rom_243A47)
	.endif
