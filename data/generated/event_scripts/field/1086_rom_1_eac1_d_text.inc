	@ field-script:0x1EA61F FieldScriptText_1EAC1D
	.globl gText_Rom_1EAC1D
gText_Rom_1EAC1D: @ 0x081EAC1D
	.string "「ケンコーばあさんの　いえ」\nつかれたと　おもうなら　よってらっしゃい！$"
	.if (. - gText_Rom_1EAC1D) > 0x25
	.error "gText_Rom_1EAC1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAC1D) < 0x25
	.space 0x25 - (. - gText_Rom_1EAC1D)
	.endif
