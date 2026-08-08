	@ data/maps/BattleFrontier_ExchangeServiceCorner/scripts.inc:398 BattleFrontier_ExchangeServiceCorner_Text_MoreBattlePointsForRecord
	.globl gText_Rom_2366BF
gText_Rom_2366BF: @ 0x082366BF
	.string "しってる?\pどこの しせつでも そうだけど\nきろくを のばしていくと\lもらえる バトルポイントって\lだんだん ふえて いくんだよ!"
	.byte EOS
	.if (. - gText_Rom_2366BF) > 0x42
	.error "gText_Rom_2366BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2366BF) < 0x42
	.space 0x42 - (. - gText_Rom_2366BF)
	.endif
