	@ data/maps/BattleFrontier_Lounge7/scripts.inc:322 BattleFrontier_Lounge7_Text_IllTakeBattlePoints
	.globl gText_Rom_239D96
gText_Rom_239D96: @ 0x08239D96
	.string "あたしゃの すごさが わかったかいっ!!\nじゃあ バトルポイントは いただくぞぃ!"
	.byte EOS
	.if (. - gText_Rom_239D96) > 0x2a
	.error "gText_Rom_239D96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_239D96) < 0x2a
	.space 0x2a - (. - gText_Rom_239D96)
	.endif
