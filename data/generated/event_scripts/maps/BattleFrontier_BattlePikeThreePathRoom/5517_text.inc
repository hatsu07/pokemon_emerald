	@ data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc:288 BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom13
	.globl gText_Rom_234108
gText_Rom_234108: @ 0x08234108
	.string "げんざい おきゃくさまは\n13へやめに いらっしゃいます……"
	.byte EOS
	.if (. - gText_Rom_234108) > 0x1f
	.error "gText_Rom_234108 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234108) < 0x1f
	.space 0x1f - (. - gText_Rom_234108)
	.endif
