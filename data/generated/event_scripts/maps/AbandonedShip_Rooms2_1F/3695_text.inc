	@ data/maps/AbandonedShip_Rooms2_1F/scripts.inc:52 AbandonedShip_Rooms2_1F_Text_DanIntro (+1 aliases)
	.globl gText_Rom_21AF11
gText_Rom_21AF11: @ 0x0821AF11
	.string "フミ『おたから さがしていたら\nトレーナー はっけん!"
	.byte EOS
	.if (. - gText_Rom_21AF11) > 0x1c
	.error "gText_Rom_21AF11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21AF11) < 0x1c
	.space 0x1c - (. - gText_Rom_21AF11)
	.endif
