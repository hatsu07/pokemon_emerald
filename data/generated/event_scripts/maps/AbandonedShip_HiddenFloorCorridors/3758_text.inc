	@ data/maps/AbandonedShip_HiddenFloorCorridors/scripts.inc:143 AbandonedShip_HiddenFloorCorridors_Text_Rm6DoorIsLocked
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21B558
gText_Rom_21B558: @ 0x0821B558
	.string "カギが かかっている\pとびらには 6ごうしつと かかれている"
	.byte EOS
	.if (. - gText_Rom_21B558) != 0x1f
	.error "gText_Rom_21B558 must retain its original byte length"
	.endif
