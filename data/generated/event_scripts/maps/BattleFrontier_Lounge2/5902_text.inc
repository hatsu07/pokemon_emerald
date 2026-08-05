	@ data/maps/BattleFrontier_Lounge2/scripts.inc:200 BattleFrontier_Lounge2_Text_DoubleBattleAdvice3
	.globl gText_Rom_237595
gText_Rom_237595: @ 0x08237595
	.string "ここの たたかいで\nダブルバトルに じしんが ついたら\lほかの ダブルバトルが できる ばしょに\lチャレンジ してみると いいかもな!"
	.byte EOS
	.if (. - gText_Rom_237595) > 0x44
	.error "gText_Rom_237595 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237595) < 0x44
	.space 0x44 - (. - gText_Rom_237595)
	.endif
