	@ data/maps/AbandonedShip_Corridors_B1F/scripts.inc:68 AbandonedShip_Corridors_B1F_Text_DoorIsLocked
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21AD1E
gText_Rom_21AD1E: @ 0x0821AD1E
	.string "カギが かかっている\pとびらには そうこ と かかれている"
	.byte EOS
	.if (. - gText_Rom_21AD1E) != 0x1e
	.error "gText_Rom_21AD1E must retain its original byte length"
	.endif
