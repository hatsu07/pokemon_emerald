	@ field-script:0x21250A FieldScriptText_2125B8
	.globl gText_Rom_2125B8
gText_Rom_2125B8: @ 0x082125B8
	.string "あずかりシステムを　つくった\nあたしからの　アドバイス　です\pどの　ボックスに　どの　ポケモンを\nあずけたか　わかるように\lきちんと　せいり　したほうが　いいですよ！{EOS}"
	.if (. - gText_Rom_2125B8) > 0x54
	.error "gText_Rom_2125B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2125B8) < 0x54
	.space 0x54 - (. - gText_Rom_2125B8)
	.endif
