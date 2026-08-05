	@ field-script:0x212849 FieldScriptText_21295A
	.globl gText_Rom_21295A
gText_Rom_21295A: @ 0x0821295A
	.string "トンネルを　つかわずに　ここから\nシダケに　いくなら　うみを　わたり\lムロから　カイナ　そして\lキンセツを　とおって　いくしか　ないな！$"
	.if (. - gText_Rom_21295A) > 0x45
	.error "gText_Rom_21295A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21295A) < 0x45
	.space 0x45 - (. - gText_Rom_21295A)
	.endif
