	@ field-script:0x2573A9 FieldScriptText_2575F8
	.globl gText_Rom_2575F8
gText_Rom_2575F8: @ 0x082575F8
	.string "やった！　ありがとう！\pじゃあ　まえにも　まして\nすてきな　やつを　きたい　してるよ！"
	.byte EOS
	.if (. - gText_Rom_2575F8) > 0x2c
	.error "gText_Rom_2575F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2575F8) < 0x2c
	.space 0x2c - (. - gText_Rom_2575F8)
	.endif
