	@ data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc:300 BattleFrontier_BattlePikeThreePathRoom_Text_RetireFromChallenge
	.globl gText_Rom_234158
gText_Rom_234158: @ 0x08234158
	.string "バトルゲームの ちょうせんを\nちゅうし なさいますか……?"
	.byte EOS
	.if (. - gText_Rom_234158) > 0x1e
	.error "gText_Rom_234158 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234158) < 0x1e
	.space 0x1e - (. - gText_Rom_234158)
	.endif
