	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:496 BattleFrontier_BattlePalaceBattleRoom_Text_AnnounceArrivalOfSpenser
	.globl gText_Rom_22B9C3
gText_Rom_22B9C3: @ 0x0822B9C3
	.string "パレスガーディアン ウコンさまーーー!\nごらいでんーーー!!{EOS}"
	.if (. - gText_Rom_22B9C3) > 0x1f
	.error "gText_Rom_22B9C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B9C3) < 0x1f
	.space 0x1f - (. - gText_Rom_22B9C3)
	.endif
