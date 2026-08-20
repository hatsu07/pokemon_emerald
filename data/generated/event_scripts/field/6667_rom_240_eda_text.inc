	@ field-script:0x240B2D FieldScriptText_240EDA
	.globl gText_Rom_240EDA
gText_Rom_240EDA: @ 0x08240EDA
	.string "あら？\nそれいじょう　もてないよ　ペコペコ\pあずかって　おくから\nこんど　きなさい　ペコペコ{EOS}"
	.if (. - gText_Rom_240EDA) > 0x2f
	.error "gText_Rom_240EDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240EDA) < 0x2f
	.space 0x2f - (. - gText_Rom_240EDA)
	.endif
