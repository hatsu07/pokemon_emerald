	@ field-script:0x1EA4B0 FieldScriptText_1EA9A0
	.globl gText_Rom_1EA9A0
gText_Rom_1EA9A0: @ 0x081EA9A0
	.string "おーい！\nなかなか　つよい　トレーナーが　いたぞー！$"
	.if (. - gText_Rom_1EA9A0) > 0x1b
	.error "gText_Rom_1EA9A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EA9A0) < 0x1b
	.space 0x1b - (. - gText_Rom_1EA9A0)
	.endif
