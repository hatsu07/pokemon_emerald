	@ field-script:0x24213B FieldScriptText_2422A1
	.globl gText_Rom_2422A1
gText_Rom_2422A1: @ 0x082422A1
	.string "とりひき　せいりつ！\nだいじに　つかって　くれよな！$"
	.if (. - gText_Rom_2422A1) > 0x1b
	.error "gText_Rom_2422A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2422A1) < 0x1b
	.space 0x1b - (. - gText_Rom_2422A1)
	.endif
