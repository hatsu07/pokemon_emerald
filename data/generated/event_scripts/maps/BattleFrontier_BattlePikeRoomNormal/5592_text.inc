	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:715 BattleFrontier_BattlePikeRoomNormal_Text_ThatsEnough
	.globl gText_Rom_234DB5
gText_Rom_234DB5: @ 0x08234DB5
	.string "ええいっ! いいかげんに しないかっ!!"
	.byte EOS
	.if (. - gText_Rom_234DB5) > 0x15
	.error "gText_Rom_234DB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234DB5) < 0x15
	.space 0x15 - (. - gText_Rom_234DB5)
	.endif
