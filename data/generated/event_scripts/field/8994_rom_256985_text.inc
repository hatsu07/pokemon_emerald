	@ field-script:0x25692B FieldScriptText_256985
	.globl gText_Rom_256985
gText_Rom_256985: @ 0x08256985
	.string "ふかい　うみだ！\nポケモンの　わざで　もぐれるかも？"
	.byte EOS
	.if (. - gText_Rom_256985) > 0x1b
	.error "gText_Rom_256985 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_256985) < 0x1b
	.space 0x1b - (. - gText_Rom_256985)
	.endif
