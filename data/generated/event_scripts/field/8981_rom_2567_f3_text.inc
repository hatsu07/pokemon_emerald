	@ field-script:0x2567A7 FieldScriptText_2567F3
	.globl gText_Rom_2567F3
gText_Rom_2567F3: @ 0x082567F3
	.string "{0xFD}{0x02}　は\nかいりきを　はっきした！\p{0xFD}{0x02}の　かいりきの　おかげで\nいわを　おせるように　なった！"
	.byte EOS
	.if (. - gText_Rom_2567F3) > 0x31
	.error "gText_Rom_2567F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2567F3) < 0x31
	.space 0x31 - (. - gText_Rom_2567F3)
	.endif
