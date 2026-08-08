	@ field-script:0x23A48C FieldScriptText_23AB0E
	.globl gText_Rom_23AB0E
gText_Rom_23AB0E: @ 0x0823AB0E
	.string "こちらでは　バトルフロンティアに　ある\nすべての　しせつに　きょうつう　した\lちょうせんの　ための　きほんてきな\lルールを　せつめい　いたします！"
	.byte EOS
	.if (. - gText_Rom_23AB0E) > 0x4a
	.error "gText_Rom_23AB0E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23AB0E) < 0x4a
	.space 0x4a - (. - gText_Rom_23AB0E)
	.endif
