	@ field-script:0x25677B FieldScriptText_2567C6
	.globl gText_Rom_2567C6
gText_Rom_2567C6: @ 0x082567C6
	.string "おおきな　いわ　だけど……\nポケモンの　わざで　おせるかも？\pかいりきを　つかいますか？"
	.byte EOS
	.if (. - gText_Rom_2567C6) > 0x2d
	.error "gText_Rom_2567C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2567C6) < 0x2d
	.space 0x2d - (. - gText_Rom_2567C6)
	.endif
