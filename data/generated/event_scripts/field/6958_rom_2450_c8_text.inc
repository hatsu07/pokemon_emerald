	@ field-script:0x245BC3 FieldScriptText_2450C8
	.globl gText_Rom_2450C8
gText_Rom_2450C8: @ 0x082450C8
	.string "くさのかたまりを　どければ\nなかへ　はいれそう\pひみつのちからを　つかいますか？$"
	.if (. - gText_Rom_2450C8) > 0x29
	.error "gText_Rom_2450C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2450C8) < 0x29
	.space 0x29 - (. - gText_Rom_2450C8)
	.endif
