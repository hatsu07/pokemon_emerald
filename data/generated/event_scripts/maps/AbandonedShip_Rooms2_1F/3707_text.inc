	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:70 AbandonedShip_Rooms2_1F_Text_KiraPostBattle
	.globl gText_Rom_21AFCA
gText_Rom_21AFCA: @ 0x0821AFCA
	.string "ナツ『おたから どこかな?\nみつかったら なに かおうか きめてるのよ!"
	.byte EOS
	.if (. - gText_Rom_21AFCA) > 0x25
	.error "gText_Rom_21AFCA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AFCA) < 0x25
	.space 0x25 - (. - gText_Rom_21AFCA)
	.endif
