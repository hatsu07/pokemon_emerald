	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:76 AbandonedShip_Rooms2_1F_Text_KiraRegister
	.globl gText_Rom_21B015
gText_Rom_21B015: @ 0x0821B015
	.string "ナツ『もう くやしいな!\nあなたなんて とうろく しちゃうんだから!"
	.byte EOS
	.if (. - gText_Rom_21B015) > 0x23
	.error "gText_Rom_21B015 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21B015) < 0x23
	.space 0x23 - (. - gText_Rom_21B015)
	.endif
