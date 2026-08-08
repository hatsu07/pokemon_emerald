	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:980 BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveLost
	.globl gText_Rom_220809
gText_Rom_220809: @ 0x08220809
	.string "しょうぶに まけちゃったとき\nどんな きもちを なるか きかせて!"
	.byte EOS
	.if (. - gText_Rom_220809) > 0x22
	.error "gText_Rom_220809 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220809) < 0x22
	.space 0x22 - (. - gText_Rom_220809)
	.endif
