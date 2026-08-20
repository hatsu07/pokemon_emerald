	@ field-script:0x1EB545 FieldScriptText_1EB78B
	.globl gText_Rom_1EB78B
gText_Rom_1EB78B: @ 0x081EB78B
	.string "わざマシン05の　なかみは　ほえる　です\nほえると　ポケモンも　にげだすのです{EOS}"
	.if (. - gText_Rom_1EB78B) > 0x28
	.error "gText_Rom_1EB78B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EB78B) < 0x28
	.space 0x28 - (. - gText_Rom_1EB78B)
	.endif
