	@ data/maps/VictoryRoad_1F/scripts.inc:124 VictoryRoad_1F_Text_WallyEntranceDefeat (+2 aliases)
	.globl gText_Rom_2196B4
gText_Rom_2196B4: @ 0x082196B4
	.string "うわぁ!\nやっぱり {PLAYER}さんは つよいよ!{EOS}"
	.if (. - gText_Rom_2196B4) > 0x16
	.error "gText_Rom_2196B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2196B4) < 0x16
	.space 0x16 - (. - gText_Rom_2196B4)
	.endif
