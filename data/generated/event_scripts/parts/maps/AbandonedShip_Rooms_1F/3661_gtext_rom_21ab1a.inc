	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:46 AbandonedShip_Rooms_1F_Text_ThaliaRegister
	.globl gText_Rom_21AB1A
gText_Rom_21AB1A: @ 0x0821AB1A
	.string "つよい トレーナーの キミを\nきねんに とうろく させて ちょうだいね!"
	.byte EOS
	.if (. - gText_Rom_21AB1A) > 0x25
	.error "gText_Rom_21AB1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AB1A) < 0x25
	.space 0x25 - (. - gText_Rom_21AB1A)
	.endif
