	@ data/maps/AbandonedShip_Rooms_1F/scripts.inc:43 AbandonedShip_Rooms_1F_Text_ThaliaPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21AAE9
gText_Rom_21AAE9: @ 0x0821AAE9
	.string "となりのへやの おじさん\nけんがく だなんて あやしいわ\pわたしに きが あるんじゃない かしら"
	.byte EOS
	.if (. - gText_Rom_21AAE9) != 0x31
	.error "gText_Rom_21AAE9 must retain its original byte length"
	.endif
