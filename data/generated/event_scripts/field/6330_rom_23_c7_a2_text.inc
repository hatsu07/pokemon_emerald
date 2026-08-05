	@ field-script:0x23C520 FieldScriptText_23C7A2
	.globl gText_Rom_23C7A2
gText_Rom_23C7A2: @ 0x0823C7A2
	.string "あーあ　のどが　かわいちゃった\nサイコソーダ　のもうかな？"
	.byte EOS
	.if (. - gText_Rom_23C7A2) > 0x1e
	.error "gText_Rom_23C7A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23C7A2) < 0x1e
	.space 0x1e - (. - gText_Rom_23C7A2)
	.endif
