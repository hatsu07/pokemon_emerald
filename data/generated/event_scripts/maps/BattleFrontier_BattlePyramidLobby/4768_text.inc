	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:565 BattleFrontier_BattlePyramidLobby_Text_PleaseTakePreviousBattleBag
	.globl gText_Rom_22C8A8
gText_Rom_22C8A8: @ 0x0822C8A8
	.string "かわりに ぜんかい おつかいになった\nこの バトルバッグを おもちくだされ!{EOS}"
	.if (. - gText_Rom_22C8A8) > 0x27
	.error "gText_Rom_22C8A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C8A8) < 0x27
	.space 0x27 - (. - gText_Rom_22C8A8)
	.endif
