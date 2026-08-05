	@ field-script:0x235B0D FieldScriptText_2365B5
	.globl gText_Rom_2365B5
gText_Rom_2365B5: @ 0x082365B5
	.string "ありがとう　ございました\pバトルポイントが　たまりましたら\nまた　おこしください"
	.byte EOS
	.if (. - gText_Rom_2365B5) > 0x29
	.error "gText_Rom_2365B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2365B5) < 0x29
	.space 0x29 - (. - gText_Rom_2365B5)
	.endif
