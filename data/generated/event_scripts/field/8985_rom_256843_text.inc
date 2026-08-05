	@ field-script:0x2567BB FieldScriptText_256843
	.globl gText_Rom_256843
gText_Rom_256843: @ 0x08256843
	.string "かいりきの　おかげで\nいわを　おして　うごかせる！"
	.byte EOS
	.if (. - gText_Rom_256843) > 0x1a
	.error "gText_Rom_256843 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_256843) < 0x1a
	.space 0x1a - (. - gText_Rom_256843)
	.endif
