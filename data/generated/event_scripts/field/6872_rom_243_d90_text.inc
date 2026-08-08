	@ field-script:0x24681A FieldScriptText_243D90
	.globl gText_Rom_243D90
gText_Rom_243D90: @ 0x08243D90
	.string "ふしぎな　おくりものを　ごりよう\nいただき　ありがとう　ございます！$"
	.if (. - gText_Rom_243D90) > 0x23
	.error "gText_Rom_243D90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243D90) < 0x23
	.space 0x23 - (. - gText_Rom_243D90)
	.endif
