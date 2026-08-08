	@ field-script:0x222998 FieldScriptText_262AAF
	.globl gText_Rom_262AAF
gText_Rom_262AAF: @ 0x08262AAF
	.string "ポロックおきばに　ポロック　おいて\nポケモンを　つかまえると\pおなじ　ような　せいかくの　ポケモンが\nあつまる　きが　するなあ$"
	.if (. - gText_Rom_262AAF) > 0x40
	.error "gText_Rom_262AAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262AAF) < 0x40
	.space 0x40 - (. - gText_Rom_262AAF)
	.endif
