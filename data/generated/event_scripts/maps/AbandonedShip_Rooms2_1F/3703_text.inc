	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:64 AbandonedShip_Rooms2_1F_Text_KiraIntro (+1 aliases)
	.globl gText_Rom_21AF99
gText_Rom_21AF99: @ 0x0821AF99
	.string "ナツ『あら? おたから さがしていたのに\nトレーナー はっけん しちゃった!"
	.byte EOS
	.if (. - gText_Rom_21AF99) > 0x27
	.error "gText_Rom_21AF99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AF99) < 0x27
	.space 0x27 - (. - gText_Rom_21AF99)
	.endif
