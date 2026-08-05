	@ field-script:0x212A66 FieldScriptText_262659
	.globl gText_Rom_262659
gText_Rom_262659: @ 0x08262659
	.string "そうですか\nこんど　ぜひ　さんか　してください！$"
	.if (. - gText_Rom_262659) > 0x19
	.error "gText_Rom_262659 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262659) < 0x19
	.space 0x19 - (. - gText_Rom_262659)
	.endif
