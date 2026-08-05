	@ field-script:0x23A2AA FieldScriptText_23A6B4
	.globl gText_Rom_23A6B4
gText_Rom_23A6B4: @ 0x0823A6B4
	.string "？？？『やあ　きて　くれたんだね\n{0xFD}{0x01}{0xFD}{0x05}！"
	.byte EOS
	.if (. - gText_Rom_23A6B4) > 0x17
	.error "gText_Rom_23A6B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A6B4) < 0x17
	.space 0x17 - (. - gText_Rom_23A6B4)
	.endif
