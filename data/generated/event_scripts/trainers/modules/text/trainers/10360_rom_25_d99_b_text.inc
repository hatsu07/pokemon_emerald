	@ data/text/trainers.inc:1640 Route116_Text_KarenPostRematch
	.globl gText_Rom_25D99B
gText_Rom_25D99B: @ 0x0825D99B
	.string "ツツジさまに かったことが あるの?\nそれじゃ いまの あたしには かてないわ{EOS}"
	.if (. - gText_Rom_25D99B) > 0x28
	.error "gText_Rom_25D99B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D99B) < 0x28
	.space 0x28 - (. - gText_Rom_25D99B)
	.endif
