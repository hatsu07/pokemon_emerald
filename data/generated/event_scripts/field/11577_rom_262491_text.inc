	@ field-script:0x2623FE FieldScriptText_262491
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_262491
gText_Rom_262491: @ 0x08262491
	.string "サファリボールを　つかいきったので\nサファリゲームを　しゅうりょう　します$"
	.if (. - gText_Rom_262491) != 0x26
	.error "gText_Rom_262491 must retain its original byte length"
	.endif
