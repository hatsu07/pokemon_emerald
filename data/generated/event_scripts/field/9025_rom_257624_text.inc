	@ field-script:0x2573D5 FieldScriptText_257624
	.globl gText_Rom_257624
gText_Rom_257624: @ 0x08257624
	.string "いまの　ままが　いいんだね？\pそうだよね　とても　すてきな\nプロフィール　だもの！"
	.byte EOS
	.if (. - gText_Rom_257624) > 0x2a
	.error "gText_Rom_257624 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257624) < 0x2a
	.space 0x2a - (. - gText_Rom_257624)
	.endif
