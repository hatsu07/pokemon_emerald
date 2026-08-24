	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:43 AbandonedShip_Rooms_1F_Text_ThaliaPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21AAE9
gText_Rom_21AAE9: @ 0x0821AAE9
	.string "となりのへやの おじさん\nけんがく だなんて あやしいわ\pわたしに きが あるんじゃない かしら"
	.byte EOS
	.if (. - gText_Rom_21AAE9) != 0x31
	.error "gText_Rom_21AAE9 must retain its original byte length"
	.endif
	.globl gText_Rom_21AB16
	.set gText_Rom_21AB16, gText_Rom_21AAE9 + 0x2d
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
