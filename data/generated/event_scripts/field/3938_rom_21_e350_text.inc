	@ field-script:0x21DF52 FieldScriptText_21E350
	.globl gText_Rom_21E350
gText_Rom_21E350: @ 0x0821E350
	.string "ハギ『ようこそ！　{0xFD}{0x01}{0xFD}{0x05}！\pわしが　この　タイドリップごうの\nめいよ　せんちょう　ハギ　じゃよ！\pいやぁ　いちどは　いんたい　したが\nこんな　すごい　ふねを　みてしまうと\lふなのりの　ちが　さわぐのう！！"
	.byte EOS
	.if (. - gText_Rom_21E350) > 0x68
	.error "gText_Rom_21E350 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E350) < 0x68
	.space 0x68 - (. - gText_Rom_21E350)
	.endif
