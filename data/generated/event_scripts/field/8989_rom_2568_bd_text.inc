	@ field-script:0x256876 FieldScriptText_2568BD
	.globl gText_Rom_2568BD
gText_Rom_2568BD: @ 0x082568BD
	.string "おおきな　たきだ！\n……たきのぼりを　つかいますか？"
	.byte EOS
	.if (. - gText_Rom_2568BD) > 0x1b
	.error "gText_Rom_2568BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2568BD) < 0x1b
	.space 0x1b - (. - gText_Rom_2568BD)
	.endif
