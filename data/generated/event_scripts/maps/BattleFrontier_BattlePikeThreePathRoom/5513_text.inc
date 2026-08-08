	@ data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc:280 BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom9
	.globl gText_Rom_2340CB
gText_Rom_2340CB: @ 0x082340CB
	.string "げんざい おきゃくさまは\n9へやめに いらっしゃいます……"
	.byte EOS
	.if (. - gText_Rom_2340CB) > 0x1e
	.error "gText_Rom_2340CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2340CB) < 0x1e
	.space 0x1e - (. - gText_Rom_2340CB)
	.endif
