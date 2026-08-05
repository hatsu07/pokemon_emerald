	@ data/maps/BattleFrontier_Lounge2/scripts.inc:125 BattleFrontier_Lounge2_Text_FacilityIsHottest
	.globl gText_Rom_236BCA
gText_Rom_236BCA: @ 0x08236BCA
	.string "そうだねぇ……\pいまは {STR_VAR_1}が\nアッつい みたいだね!"
	.byte EOS
	.if (. - gText_Rom_236BCA) > 0x1c
	.error "gText_Rom_236BCA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236BCA) < 0x1c
	.space 0x1c - (. - gText_Rom_236BCA)
	.endif
