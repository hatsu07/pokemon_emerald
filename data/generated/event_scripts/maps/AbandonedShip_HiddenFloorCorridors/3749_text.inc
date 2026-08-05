	@ data/maps/AbandonedShip_HiddenFloorCorridors/scripts.inc:134 AbandonedShip_HiddenFloorCorridors_Text_Rm1DoorIsLocked
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21B4FB
gText_Rom_21B4FB: @ 0x0821B4FB
	.string "カギが かかっている\pとびらには 1ごうしつと かかれている"
	.byte EOS
	.if (. - gText_Rom_21B4FB) != 0x1f
	.error "gText_Rom_21B4FB must retain its original byte length"
	.endif
