	@ field-script:0x21DE84 FieldScriptText_21E201
	.globl gText_Rom_21E201
gText_Rom_21E201: @ 0x0821E201
	.string "かいりゅうを　ものともせず　すすむ\nれんらくせんを　どうぞ　ごらんください"
	.byte EOS
	.if (. - gText_Rom_21E201) > 0x26
	.error "gText_Rom_21E201 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E201) < 0x26
	.space 0x26 - (. - gText_Rom_21E201)
	.endif
