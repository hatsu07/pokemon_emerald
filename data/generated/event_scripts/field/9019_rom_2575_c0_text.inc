	@ field-script:0x25734E FieldScriptText_2575C0
	.globl gText_Rom_2575C0
gText_Rom_2575C0: @ 0x082575C0
	.string "こんにちは\nえがおの　すてきな　トレーナーさん！"
	.byte EOS
	.if (. - gText_Rom_2575C0) > 0x19
	.error "gText_Rom_2575C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2575C0) < 0x19
	.space 0x19 - (. - gText_Rom_2575C0)
	.endif
