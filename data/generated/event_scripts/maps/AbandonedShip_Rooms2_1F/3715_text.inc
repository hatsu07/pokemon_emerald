	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:82 AbandonedShip_Rooms2_1F_Text_DanRematchDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21B06E
gText_Rom_21B06E: @ 0x0821B06E
	.string "フミ『あいかわらず つよいな!"
	.byte EOS
	.if (. - gText_Rom_21B06E) != 0x10
	.error "gText_Rom_21B06E must retain its original byte length"
	.endif
