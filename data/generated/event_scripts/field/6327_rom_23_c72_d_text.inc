	@ field-script:0x23C505 FieldScriptText_23C72D
	.globl gText_Rom_23C72D
gText_Rom_23C72D: @ 0x0823C72D
	.string "オレは　カイナに　くるたびに\nここで　あつい　しょうぶと\lつめたい　サイコソーダを　たのしむんだ！"
	.byte EOS
	.if (. - gText_Rom_23C72D) > 0x32
	.error "gText_Rom_23C72D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23C72D) < 0x32
	.space 0x32 - (. - gText_Rom_23C72D)
	.endif
