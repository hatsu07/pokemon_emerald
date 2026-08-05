	@ data/text/trainers.inc:587 Route109_Text_AlicePostBattle
	.globl gText_Rom_25AE51
gText_Rom_25AE51: @ 0x0825AE51
	.string "ほっぺの あたりが いちばん\nひやけ しやすい ばしょ なのよ!$"
	.if (. - gText_Rom_25AE51) > 0x21
	.error "gText_Rom_25AE51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AE51) < 0x21
	.space 0x21 - (. - gText_Rom_25AE51)
	.endif
