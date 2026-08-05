	@ data/maps/AbandonedShip_HiddenFloorCorridors/scripts.inc:140 AbandonedShip_HiddenFloorCorridors_Text_Rm4DoorIsLocked
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21B539
gText_Rom_21B539: @ 0x0821B539
	.string "カギが かかっている\pとびらには 4ごうしつと かかれている"
	.byte EOS
	.if (. - gText_Rom_21B539) != 0x1f
	.error "gText_Rom_21B539 must retain its original byte length"
	.endif
