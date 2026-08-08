	@ data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc:268 BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom3
	.globl gText_Rom_234071
gText_Rom_234071: @ 0x08234071
	.string "げんざい おきゃくさまは\n3へやめに いらっしゃいます……"
	.byte EOS
	.if (. - gText_Rom_234071) > 0x1e
	.error "gText_Rom_234071 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234071) < 0x1e
	.space 0x1e - (. - gText_Rom_234071)
	.endif
