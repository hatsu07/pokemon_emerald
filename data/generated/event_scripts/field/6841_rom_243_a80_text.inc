	@ field-script:0x2440DF FieldScriptText_243A80
	.globl gText_Rom_243A80
gText_Rom_243A80: @ 0x08243A80
	.string "バッグに　いれてある　どうぐを\nべんりボタンに　とうろく　できます{EOS}"
	.if (. - gText_Rom_243A80) > 0x22
	.error "gText_Rom_243A80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243A80) < 0x22
	.space 0x22 - (. - gText_Rom_243A80)
	.endif
