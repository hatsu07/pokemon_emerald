	@ field-script:0x206FCE FieldScriptText_24A734
	.globl gText_Rom_24A734
gText_Rom_24A734: @ 0x0824A734
	.string "どの　せつめいを　ききますか？$"
	.if (. - gText_Rom_24A734) > 0x10
	.error "gText_Rom_24A734 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A734) < 0x10
	.space 0x10 - (. - gText_Rom_24A734)
	.endif
