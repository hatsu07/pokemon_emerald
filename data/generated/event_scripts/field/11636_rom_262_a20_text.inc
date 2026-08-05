	@ field-script:0x222986 FieldScriptText_262A20
	.globl gText_Rom_262A20
gText_Rom_262A20: @ 0x08262A20
	.string "おれ　ポロック　もってないけど\nポケモン　たくさん　つかまえたよ\pちかづいて　ボールを　なげる　だけで\nけっこう　つかまえられる　もんだよ！$"
	.if (. - gText_Rom_262A20) > 0x47
	.error "gText_Rom_262A20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262A20) < 0x47
	.space 0x47 - (. - gText_Rom_262A20)
	.endif
