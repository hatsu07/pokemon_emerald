	@ data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc:272 BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom5
	.globl gText_Rom_23408F
gText_Rom_23408F: @ 0x0823408F
	.string "げんざい おきゃくさまは\n5へやめに いらっしゃいます……"
	.byte EOS
	.if (. - gText_Rom_23408F) > 0x1e
	.error "gText_Rom_23408F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23408F) < 0x1e
	.space 0x1e - (. - gText_Rom_23408F)
	.endif
