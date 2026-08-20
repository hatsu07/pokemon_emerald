	@ field-script:0x24C4FF FieldScriptText_243A12
	.globl gText_Rom_243A12
gText_Rom_243A12: @ 0x08243A12
	.string "{0xFD}{0x02}が　すきそうな　ばんぐみをやってる！\n…………………………………………………\pさきを　いそがなきゃ！{EOS}"
	.if (. - gText_Rom_243A12) > 0x35
	.error "gText_Rom_243A12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243A12) < 0x35
	.space 0x35 - (. - gText_Rom_243A12)
	.endif
