	@ field-script:0x1EC442 FieldScriptText_1EC769
	.globl gText_Rom_1EC769
gText_Rom_1EC769: @ 0x081EC769
	.string "どお？\nきれいに　ならんだ　この　はな！\pぜーんぶ　わたしが　うえたのよ！{EOS}"
	.if (. - gText_Rom_1EC769) > 0x26
	.error "gText_Rom_1EC769 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EC769) < 0x26
	.space 0x26 - (. - gText_Rom_1EC769)
	.endif
