	@ field-script:0x254E89 FieldScriptText_256549
	.globl gText_Rom_256549
gText_Rom_256549: @ 0x08256549
	.string "でも　きみには　このまえ　おしえたよね\pこんどは　ほかの　ひとに　おしえたいなぁ"
	.byte EOS
	.if (. - gText_Rom_256549) > 0x29
	.error "gText_Rom_256549 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_256549) < 0x29
	.space 0x29 - (. - gText_Rom_256549)
	.endif
