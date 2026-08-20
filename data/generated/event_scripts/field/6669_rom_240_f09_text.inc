	@ field-script:0x240B3C FieldScriptText_240F09
	.globl gText_Rom_240F09
gText_Rom_240F09: @ 0x08240F09
	.string "あら？\nパソコン　いっぱい　なのか　ペコペコ\pあずかって　おくから\nこんど　きなさい　ペコペコ{EOS}"
	.if (. - gText_Rom_240F09) > 0x30
	.error "gText_Rom_240F09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240F09) < 0x30
	.space 0x30 - (. - gText_Rom_240F09)
	.endif
