	@ field-script:0x24218C FieldScriptText_242307
	.globl gText_Rom_242307
gText_Rom_242307: @ 0x08242307
	.string "ほしいモノ　　　　　　　あげるモノ\n　あかいかけら　　　{ESCAPE}{0x02}{ESCAPE}{0x03}　ほのおのいし\pほしいモノ　　　　　　　あげるモノ\n　きいろいかけら　　{ESCAPE}{0x02}{ESCAPE}{0x03}　かみなりのいし\pほしいモノ　　　　　　　あげるモノ\n　あおいかけら　　　{ESCAPE}{0x02}{ESCAPE}{0x03}　みずのいし\pほしいモノ　　　　　　　あげるモノ\n　みどりのかけら　　{ESCAPE}{0x02}{ESCAPE}{0x03}　リーフのいし$"
	.if (. - gText_Rom_242307) > 0xa8
	.error "gText_Rom_242307 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_242307) < 0xa8
	.space 0xa8 - (. - gText_Rom_242307)
	.endif
