	@ data/maps/MtChimney/scripts.inc:735 MtChimney_Text_RemoveTheMeteorite
	.globl gText_Rom_21577F
gText_Rom_21577F: @ 0x0821577F
	.string "なぞの そうちに\nいんせきが はめられている……\pいんせきを とりますか?$"
	.if (. - gText_Rom_21577F) > 0x26
	.error "gText_Rom_21577F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21577F) < 0x26
	.space 0x26 - (. - gText_Rom_21577F)
	.endif
