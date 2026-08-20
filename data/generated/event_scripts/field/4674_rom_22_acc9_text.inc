	@ field-script:0x1F6831 FieldScriptText_22ACC9
	.globl gText_Rom_22ACC9
gText_Rom_22ACC9: @ 0x0822ACC9
	.string "とにかく　こうげきが\nすきな　せいかく\pじぶんの　からだを　まもる　ことが\nすきな　せいかく\pあいてを　こまらせたり　かわった　ことを\nするのが　すきな　せいかく\pポケモンは　せいかくに　よって\nすきで　とくいな　わざと\lきらいで　にがてな　わざが　ちがいます{EOS}"
	.if (. - gText_Rom_22ACC9) > 0x83
	.error "gText_Rom_22ACC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22ACC9) < 0x83
	.space 0x83 - (. - gText_Rom_22ACC9)
	.endif
