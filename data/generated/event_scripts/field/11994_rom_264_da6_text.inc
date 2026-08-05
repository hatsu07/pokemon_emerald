	@ field-script:0x2646C3 FieldScriptText_264DA6
	.globl gText_Rom_264DA6
gText_Rom_264DA6: @ 0x08264DA6
	.string "すっごい！　せいかい！\nきゃー！　あなたって　センス　あるねー！$"
	.if (. - gText_Rom_264DA6) > 0x21
	.error "gText_Rom_264DA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264DA6) < 0x21
	.space 0x21 - (. - gText_Rom_264DA6)
	.endif
