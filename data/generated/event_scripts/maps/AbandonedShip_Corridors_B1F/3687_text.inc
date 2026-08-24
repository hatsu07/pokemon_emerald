	@ data/maps/AbandonedShip_Corridors_B1F/scripts.inc:68 AbandonedShip_Corridors_B1F_Text_DoorIsLocked
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21AD1E
gText_Rom_21AD1E: @ 0x0821AD1E
	.string "カギが かかっている\pとびらには そうこ と かかれている"
	.byte EOS
	.if (. - gText_Rom_21AD1E) != 0x1e
	.error "gText_Rom_21AD1E must retain its original byte length"
	.endif
	.globl gText_Rom_21AD38
	.set gText_Rom_21AD38, gText_Rom_21AD1E + 0x1a
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
