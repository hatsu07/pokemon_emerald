	@ field-script:0x21EB76 FieldScriptText_262B92
	.globl gText_Rom_262B92
gText_Rom_262B92: @ 0x08262B92
	.string "このへんに　いる　ポケモンは\nはじめて　みるやつ　ばっかりだ！\pそんな　めずらしい　ポケモンが\nつかまえ　ほうだい　だなんて　すげー！$"
	.if (. - gText_Rom_262B92) > 0x44
	.error "gText_Rom_262B92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262B92) < 0x44
	.space 0x44 - (. - gText_Rom_262B92)
	.endif
