	@ data/maps/AbandonedShip_HiddenFloorCorridors/scripts.inc:137 AbandonedShip_HiddenFloorCorridors_Text_Rm2DoorIsLocked
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21B51A
gText_Rom_21B51A: @ 0x0821B51A
	.string "カギが かかっている\pとびらには 2ごうしつと かかれている"
	.byte EOS
	.if (. - gText_Rom_21B51A) != 0x1f
	.error "gText_Rom_21B51A must retain its original byte length"
	.endif
