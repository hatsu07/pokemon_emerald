	@ field-script:0x20A70C FieldScriptText_263406
	.globl gText_Rom_263406
gText_Rom_263406: @ 0x08263406
	.string "………あら？\nどうぐが　いっぱいの　ようですね\pどうぐを　せいりしてから　もういちど\nおこし　ください{EOS}"
	.if (. - gText_Rom_263406) > 0x34
	.error "gText_Rom_263406 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263406) < 0x34
	.space 0x34 - (. - gText_Rom_263406)
	.endif
