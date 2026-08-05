	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:950 BattleFrontier_BattleTowerLobby_Text_ThankYouForPlaying
	.globl gText_Rom_220681
gText_Rom_220681: @ 0x08220681
	.string "おつかれさまでした!\p"
	.byte EOS
	.if (. - gText_Rom_220681) > 0xc
	.error "gText_Rom_220681 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220681) < 0xc
	.space 0xc - (. - gText_Rom_220681)
	.endif
