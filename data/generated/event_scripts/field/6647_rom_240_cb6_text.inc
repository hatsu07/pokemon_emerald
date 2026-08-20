	@ field-script:0x240810 FieldScriptText_240CB6
	.globl gText_Rom_240CB6
gText_Rom_240CB6: @ 0x08240CB6
	.string "その　ふくろを　もって\nはいの　つもった　ところを　あるくと\lあら　ふしぎ！\pふくろの　なかに　かざんばいが\nどんどん　たまっていくよ　ペコペコ！\pかざんばいが　たまったと　おもったら\nわたしの　ところに　きなさい　ペコペコ！{EOS}"
	.if (. - gText_Rom_240CB6) > 0x72
	.error "gText_Rom_240CB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240CB6) < 0x72
	.space 0x72 - (. - gText_Rom_240CB6)
	.endif
