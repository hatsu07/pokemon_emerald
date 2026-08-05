	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:387 BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe
	.globl gText_Rom_21F371
gText_Rom_21F371: @ 0x0821F371
	.string "ほほおぉ ここが バトルドームか……\nよし ジェントルマンには まけんぞ!\p……で いりぐちは どこ なんじゃろ?"
	.byte EOS
	.if (. - gText_Rom_21F371) > 0x3a
	.error "gText_Rom_21F371 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F371) < 0x3a
	.space 0x3a - (. - gText_Rom_21F371)
	.endif
