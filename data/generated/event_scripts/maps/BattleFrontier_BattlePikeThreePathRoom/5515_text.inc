	@ data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc:284 BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom11
	.globl gText_Rom_2340E9
gText_Rom_2340E9: @ 0x082340E9
	.string "げんざい おきゃくさまは\n11へやめに いらっしゃいます……"
	.byte EOS
	.if (. - gText_Rom_2340E9) > 0x1f
	.error "gText_Rom_2340E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2340E9) < 0x1f
	.space 0x1f - (. - gText_Rom_2340E9)
	.endif
