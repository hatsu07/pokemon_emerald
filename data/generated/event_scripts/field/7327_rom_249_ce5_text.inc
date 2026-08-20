	@ field-script:0x248BC7 FieldScriptText_249CE5
	.globl gText_Rom_249CE5
gText_Rom_249CE5: @ 0x08249CE5
	.string "どの　せつめいを　ききますか？{EOS}"
	.if (. - gText_Rom_249CE5) > 0x10
	.error "gText_Rom_249CE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_249CE5) < 0x10
	.space 0x10 - (. - gText_Rom_249CE5)
	.endif
