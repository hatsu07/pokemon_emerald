	@ field-script:0x1EA56A FieldScriptText_1EAA80
	.globl gText_Rom_1EAA80
gText_Rom_1EAA80: @ 0x081EAA80
	.string "くやしい……\p……　ぐっすん！　おばあちゃーん！！$"
	.if (. - gText_Rom_1EAA80) > 0x1a
	.error "gText_Rom_1EAA80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAA80) < 0x1a
	.space 0x1a - (. - gText_Rom_1EAA80)
	.endif
