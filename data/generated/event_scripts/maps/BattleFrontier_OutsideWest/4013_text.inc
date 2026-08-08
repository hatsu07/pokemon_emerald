	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:348 BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere
	.globl gText_Rom_21F07B
gText_Rom_21F07B: @ 0x0821F07B
	.string "すぐに チャレンジ したいのに\nくる とちゅうで ふなよい して しまった\pうっぷ……"
	.byte EOS
	.if (. - gText_Rom_21F07B) > 0x2c
	.error "gText_Rom_21F07B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F07B) < 0x2c
	.space 0x2c - (. - gText_Rom_21F07B)
	.endif
