	@ data/maps/BattleFrontier_Lounge2/scripts.inc:215 BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion
	.globl gText_Rom_2376C0
gText_Rom_2376C0: @ 0x082376C0
	.string "すっげえ せっとくりょくー!!\nやっぱ センパイは ちがうっすねー"
	.byte EOS
	.if (. - gText_Rom_2376C0) > 0x22
	.error "gText_Rom_2376C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2376C0) < 0x22
	.space 0x22 - (. - gText_Rom_2376C0)
	.endif
