	@ field-script:0x1EB859 FieldScriptText_1EBA39
	.globl gText_Rom_1EBA39
gText_Rom_1EBA39: @ 0x081EBA39
	.string "どうくつの　なかって\nくさむらの　ある　どうろと　ちがって\lいつ　ポケモンが　とびだして　くるのか\lわからないから　ドキドキ　しちゃうわ{EOS}"
	.if (. - gText_Rom_1EBA39) > 0x45
	.error "gText_Rom_1EBA39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EBA39) < 0x45
	.space 0x45 - (. - gText_Rom_1EBA39)
	.endif
