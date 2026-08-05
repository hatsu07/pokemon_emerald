	@ data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc:276 BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom7
	.globl gText_Rom_2340AD
gText_Rom_2340AD: @ 0x082340AD
	.string "げんざい おきゃくさまは\n7へやめに いらっしゃいます……"
	.byte EOS
	.if (. - gText_Rom_2340AD) > 0x1e
	.error "gText_Rom_2340AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2340AD) < 0x1e
	.space 0x1e - (. - gText_Rom_2340AD)
	.endif
