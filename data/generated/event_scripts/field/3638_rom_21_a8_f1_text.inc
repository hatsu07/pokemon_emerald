	@ field-script:0x21A7F8 FieldScriptText_21A8F1
	.globl gText_Rom_21A8F1
gText_Rom_21A8F1: @ 0x0821A8F1
	.string "はつでんそうちに　ちかづいた　だけで\nねっきが　つたわってくる！\pはやく　とめたほうが　よさそうだ"
	.byte EOS
	.if (. - gText_Rom_21A8F1) > 0x32
	.error "gText_Rom_21A8F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21A8F1) < 0x32
	.space 0x32 - (. - gText_Rom_21A8F1)
	.endif
