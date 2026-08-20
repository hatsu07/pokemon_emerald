	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:356 BattleFrontier_BattleDomePreBattleRoom_Text_RetireYourChallenge
	.globl gText_Rom_2286DC
gText_Rom_2286DC: @ 0x082286DC
	.string "バトルトーナメントの ちょうせんを\nちゅうし しますか?{EOS}"
	.if (. - gText_Rom_2286DC) > 0x1d
	.error "gText_Rom_2286DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2286DC) < 0x1d
	.space 0x1d - (. - gText_Rom_2286DC)
	.endif
