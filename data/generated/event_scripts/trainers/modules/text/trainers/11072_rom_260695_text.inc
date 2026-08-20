	@ data/text/trainers.inc:2693 Route124_Text_DeclanDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_260695
gText_Rom_260695: @ 0x08260695
	.string "かなしい\nそらの あおさが かなしい{EOS}"
	.if (. - gText_Rom_260695) != 0x13
	.error "gText_Rom_260695 must retain its original byte length"
	.endif
