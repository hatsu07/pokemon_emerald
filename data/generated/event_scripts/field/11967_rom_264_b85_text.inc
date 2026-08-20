	@ field-script:0x2644D6 FieldScriptText_264B85
	.globl gText_Rom_264B85
gText_Rom_264B85: @ 0x08264B85
	.string "えっ……\n{0xFD}{0x03}って　{0xFD}{0x02}？\p……へえぇ　そうなの　かしらねぇ……\pとりあえず　ありがとう……\nきっと　たいせつに　するわね……{EOS}"
	.if (. - gText_Rom_264B85) > 0x40
	.error "gText_Rom_264B85 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264B85) < 0x40
	.space 0x40 - (. - gText_Rom_264B85)
	.endif
