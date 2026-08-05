	@ field-script:0x212AC0 FieldScriptText_2626BA
	.globl gText_Rom_2626BA
gText_Rom_2626BA: @ 0x082626BA
	.string "じかんに　なりましたら\nこちらから　おしらせ　しますので\pぞんぶんに　おたのしみ　ください！\nでは　いってらっしゃい！$"
	.if (. - gText_Rom_2626BA) > 0x3c
	.error "gText_Rom_2626BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2626BA) < 0x3c
	.space 0x3c - (. - gText_Rom_2626BA)
	.endif
