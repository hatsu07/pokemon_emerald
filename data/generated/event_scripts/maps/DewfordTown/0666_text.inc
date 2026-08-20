	@ data/maps/DewfordTown/scripts.inc:645 DewfordTown_Text_SetSailBackToPetalburg
	.globl gText_Rom_1E51BF
gText_Rom_1E51BF: @ 0x081E51BF
	.string "ハギ『てがみは とどけたのかい?\pそれとも トウカに もどるのかね?{EOS}"
	.if (. - gText_Rom_1E51BF) > 0x23
	.error "gText_Rom_1E51BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E51BF) < 0x23
	.space 0x23 - (. - gText_Rom_1E51BF)
	.endif
