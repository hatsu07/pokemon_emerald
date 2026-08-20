	@ field-script:0x21EA95 FieldScriptText_262869
	.globl gText_Rom_262869
gText_Rom_262869: @ 0x08262869
	.string "この　さきに　いきたい　けど\nじてんしゃ　もって　くるの　わすれた……\pおくに　めずらしい　ポケモンが\nいそうな　きが　するのに！{EOS}"
	.if (. - gText_Rom_262869) > 0x42
	.error "gText_Rom_262869 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262869) < 0x42
	.space 0x42 - (. - gText_Rom_262869)
	.endif
