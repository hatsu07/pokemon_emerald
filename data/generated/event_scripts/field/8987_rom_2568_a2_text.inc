	@ field-script:0x25689A FieldScriptText_2568A2
	.globl gText_Rom_2568A2
gText_Rom_2568A2: @ 0x082568A2
	.string "おおきな　おとを　たてて\nみずが　ながれおちている！"
	.byte EOS
	.if (. - gText_Rom_2568A2) > 0x1b
	.error "gText_Rom_2568A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2568A2) < 0x1b
	.space 0x1b - (. - gText_Rom_2568A2)
	.endif
