	@ field-script:0x235418 FieldScriptText_2354E6
	.globl gText_Rom_2354E6
gText_Rom_2354E6: @ 0x082354E6
	.string "そうなんだ…\pでも　ともだちの　なまえを　ここで　みると\nがんばろうって　きもちに　なるよね！"
	.byte EOS
	.if (. - gText_Rom_2354E6) > 0x30
	.error "gText_Rom_2354E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2354E6) < 0x30
	.space 0x30 - (. - gText_Rom_2354E6)
	.endif
