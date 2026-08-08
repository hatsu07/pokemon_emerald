	@ field-script:0x245B11 FieldScriptText_21D5E0
	.globl gText_Rom_21D5E0
gText_Rom_21D5E0: @ 0x0821D5E0
	.string "かべに　ちいさな　くぼみが　ある\pひみつのちからを　つかいますか？"
	.byte EOS
	.if (. - gText_Rom_21D5E0) > 0x22
	.error "gText_Rom_21D5E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21D5E0) < 0x22
	.space 0x22 - (. - gText_Rom_21D5E0)
	.endif
