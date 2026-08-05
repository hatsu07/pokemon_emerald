	@ field-script:0x213E74 FieldScriptText_243CDA
	.globl gText_Rom_243CDA
gText_Rom_243CDA: @ 0x08243CDA
	.string "かべに　おおきな　あなが　あいている！$"
	.if (. - gText_Rom_243CDA) > 0x14
	.error "gText_Rom_243CDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243CDA) < 0x14
	.space 0x14 - (. - gText_Rom_243CDA)
	.endif
