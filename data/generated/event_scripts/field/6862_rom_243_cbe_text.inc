	@ field-script:0x21BB8A FieldScriptText_243CBE
	.globl gText_Rom_243CBE
gText_Rom_243CBE: @ 0x08243CBE
	.string "どこか　とおくの　とびらが\nひらいたような　おとだ……{EOS}"
	.if (. - gText_Rom_243CBE) > 0x1c
	.error "gText_Rom_243CBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243CBE) < 0x1c
	.space 0x1c - (. - gText_Rom_243CBE)
	.endif
