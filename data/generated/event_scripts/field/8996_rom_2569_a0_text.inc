	@ field-script:0x256907 FieldScriptText_2569A0
	.globl gText_Rom_2569A0
gText_Rom_2569A0: @ 0x082569A0
	.string "ふかい　うみだ！\nダイビングを　つかいますか？"
	.byte EOS
	.if (. - gText_Rom_2569A0) > 0x18
	.error "gText_Rom_2569A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2569A0) < 0x18
	.space 0x18 - (. - gText_Rom_2569A0)
	.endif
