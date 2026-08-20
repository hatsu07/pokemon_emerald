	@ field-script:0x212B07 FieldScriptText_2626F6
	.globl gText_Rom_2626F6
gText_Rom_2626F6: @ 0x082626F6
	.string "おきゃくさん！\nボックスが　いっぱい　ですよ！{EOS}"
	.if (. - gText_Rom_2626F6) > 0x18
	.error "gText_Rom_2626F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2626F6) < 0x18
	.space 0x18 - (. - gText_Rom_2626F6)
	.endif
