	@ data/maps/DewfordTown/scripts.inc:651 DewfordTown_Text_GoDeliverIllBeWaiting
	.globl gText_Rom_1E5209
gText_Rom_1E5209: @ 0x081E5209
	.string "ハギ『では てがみを とどけておいで\nわしは ここで まっておるから{EOS}"
	.if (. - gText_Rom_1E5209) > 0x23
	.error "gText_Rom_1E5209 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5209) < 0x23
	.space 0x23 - (. - gText_Rom_1E5209)
	.endif
