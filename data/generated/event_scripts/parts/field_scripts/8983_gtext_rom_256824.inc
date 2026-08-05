	@ field-script:0x2567B1 FieldScriptText_256824
	.globl gText_Rom_256824
gText_Rom_256824: @ 0x08256824
	.string "おおきな　いわ　だけど……\nポケモンの　わざで　おせるかも？"
	.byte EOS
	.if (. - gText_Rom_256824) > 0x1f
	.error "gText_Rom_256824 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_256824) < 0x1f
	.space 0x1f - (. - gText_Rom_256824)
	.endif
