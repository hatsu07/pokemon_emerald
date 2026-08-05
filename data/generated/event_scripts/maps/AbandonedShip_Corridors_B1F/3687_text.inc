	@ data/maps/AbandonedShip_Corridors_B1F/scripts.inc:71 AbandonedShip_Corridors_B1F_Text_InsertedStorageKey
	.globl gText_Rom_21AD3C
gText_Rom_21AD3C: @ 0x0821AD3C
	.string "{PLAYER}は\nそうこのカギを つかった!\pさしこんだ カギは ぬけなくなったが\nとびらは ひらいた!"
	.byte EOS
	.if (. - gText_Rom_21AD3C) > 0x30
	.error "gText_Rom_21AD3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AD3C) < 0x30
	.space 0x30 - (. - gText_Rom_21AD3C)
	.endif
