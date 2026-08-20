	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:446 BattleFrontier_BattleDomeLobby_Text_TakeSinglesChallenge
	.globl gText_Rom_2274AA
gText_Rom_2274AA: @ 0x082274AA
	.string "シングル バトルトーナメントに\nちょうせん しますか?{EOS}"
	.if (. - gText_Rom_2274AA) > 0x1c
	.error "gText_Rom_2274AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2274AA) < 0x1c
	.space 0x1c - (. - gText_Rom_2274AA)
	.endif
