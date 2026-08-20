	@ field-script:0x21EA8C FieldScriptText_26283A
	.globl gText_Rom_26283A
gText_Rom_26283A: @ 0x0826283A
	.string "しってた？\pあの　しかくい　はこに　ポロックを　おくと\nポケモンが　あつまって　くるんだよ！{EOS}"
	.if (. - gText_Rom_26283A) > 0x2f
	.error "gText_Rom_26283A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26283A) < 0x2f
	.space 0x2f - (. - gText_Rom_26283A)
	.endif
