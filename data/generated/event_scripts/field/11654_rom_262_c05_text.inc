	@ field-script:0x21EB88 FieldScriptText_262C05
	.globl gText_Rom_262C05
gText_Rom_262C05: @ 0x08262C05
	.string "サファリボールが　あと　すこししか\nのこって　ないんだよ\lなにを　つかまえるか　まよっちゃうなあ{EOS}"
	.if (. - gText_Rom_262C05) > 0x31
	.error "gText_Rom_262C05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262C05) < 0x31
	.space 0x31 - (. - gText_Rom_262C05)
	.endif
