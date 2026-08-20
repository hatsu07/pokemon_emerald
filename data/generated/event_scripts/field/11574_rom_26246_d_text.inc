	@ field-script:0x2623ED FieldScriptText_26246D
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26246D
gText_Rom_26246D: @ 0x0826246D
	.string "ピンポーン！　じかん　でーす！\nサファリゲームを　しゅうりょう　します{EOS}"
	.if (. - gText_Rom_26246D) != 0x24
	.error "gText_Rom_26246D must retain its original byte length"
	.endif
