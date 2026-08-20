	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1063 BattleFrontier_BattleDomeBattleRoom_Text_SpectatorTuckerChant
	.globl gText_Rom_22988B
gText_Rom_22988B: @ 0x0822988B
	.string "かんきゃく『ヒースっ!! ヒースっ!!\nヒースっ!! ヒースっ!! ヒースっ!!{EOS}"
	.if (. - gText_Rom_22988B) > 0x29
	.error "gText_Rom_22988B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22988B) < 0x29
	.space 0x29 - (. - gText_Rom_22988B)
	.endif
