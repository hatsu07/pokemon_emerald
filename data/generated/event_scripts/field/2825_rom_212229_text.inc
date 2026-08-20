	@ field-script:0x212171 FieldScriptText_212229
	.globl gText_Rom_212229
gText_Rom_212229: @ 0x08212229
	.string "ケースのなかに　かわった　かたちの　いしが\nいくつも　かざってある……{EOS}"
	.if (. - gText_Rom_212229) > 0x24
	.error "gText_Rom_212229 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_212229) < 0x24
	.space 0x24 - (. - gText_Rom_212229)
	.endif
