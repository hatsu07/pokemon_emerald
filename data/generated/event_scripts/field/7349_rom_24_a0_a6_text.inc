	@ field-script:0x248D52 FieldScriptText_24A0A6
	.globl gText_Rom_24A0A6
gText_Rom_24A0A6: @ 0x0824A0A6
	.string "そちらの　ポケモンで　よろしいですか？{EOS}"
	.if (. - gText_Rom_24A0A6) > 0x14
	.error "gText_Rom_24A0A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A0A6) < 0x14
	.space 0x14 - (. - gText_Rom_24A0A6)
	.endif
