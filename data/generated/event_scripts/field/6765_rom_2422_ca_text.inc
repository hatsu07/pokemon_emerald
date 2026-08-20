	@ field-script:0x24216C FieldScriptText_2422CA
	.globl gText_Rom_2422CA
gText_Rom_2422CA: @ 0x082422CA
	.string "おっと　バッグが　いっぱい　だぜ\nどうぐを　へらして　きなよ{EOS}"
	.if (. - gText_Rom_2422CA) > 0x1f
	.error "gText_Rom_2422CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2422CA) < 0x1f
	.space 0x1f - (. - gText_Rom_2422CA)
	.endif
