	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:568 BattleFrontier_BattlePyramidLobby_Text_PleaseTakeThisBattleBag
	.globl gText_Rom_22C8CF
gText_Rom_22C8CF: @ 0x0822C8CF
	.string "かわりに こちらの\nバトルバッグを おもちくだされ!{EOS}"
	.if (. - gText_Rom_22C8CF) > 0x1b
	.error "gText_Rom_22C8CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C8CF) < 0x1b
	.space 0x1b - (. - gText_Rom_22C8CF)
	.endif
