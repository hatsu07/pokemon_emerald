	@ data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc:264 BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom1
	.globl gText_Rom_234053
gText_Rom_234053: @ 0x08234053
	.string "げんざい おきゃくさまは\n1へやめに いらっしゃいます……"
	.byte EOS
	.if (. - gText_Rom_234053) > 0x1e
	.error "gText_Rom_234053 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234053) < 0x1e
	.space 0x1e - (. - gText_Rom_234053)
	.endif
