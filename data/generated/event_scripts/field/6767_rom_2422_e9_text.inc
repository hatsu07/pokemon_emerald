	@ field-script:0x242176 FieldScriptText_2422E9
	.globl gText_Rom_2422E9
gText_Rom_2422E9: @ 0x082422E9
	.string "そいつは　がっかりだ\nきが　むいたら　また　きてくれよな！$"
	.if (. - gText_Rom_2422E9) > 0x1e
	.error "gText_Rom_2422E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2422E9) < 0x1e
	.space 0x1e - (. - gText_Rom_2422E9)
	.endif
