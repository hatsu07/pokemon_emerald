	@ data/maps/BattleFrontier_Lounge2/scripts.inc:128 BattleFrontier_Lounge2_Text_BattleTowerIsHottest
	.globl gText_Rom_236BE6
gText_Rom_236BE6: @ 0x08236BE6
	.string "そうだねぇ……\pいまは バトルタワー{STR_VAR_1}が\nアッつい みたいだね!"
	.byte EOS
	.if (. - gText_Rom_236BE6) > 0x22
	.error "gText_Rom_236BE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236BE6) < 0x22
	.space 0x22 - (. - gText_Rom_236BE6)
	.endif
