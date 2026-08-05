	@ field-script:0x222B75 FieldScriptText_222C46
	.globl gText_Rom_222C46
gText_Rom_222C46: @ 0x08222C46
	.string "バトルポイント　ひきかえサービス　コーナー\nひきかえろ！　キミの　バトルポイント！$"
	.if (. - gText_Rom_222C46) > 0x2a
	.error "gText_Rom_222C46 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222C46) < 0x2a
	.space 0x2a - (. - gText_Rom_222C46)
	.endif
