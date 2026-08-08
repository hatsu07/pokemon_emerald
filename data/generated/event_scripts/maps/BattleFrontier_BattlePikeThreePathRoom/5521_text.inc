	@ data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.inc:296 BattleFrontier_BattlePikeThreePathRoom_Text_SaveChallengeAndQuit
	.globl gText_Rom_23413D
gText_Rom_23413D: @ 0x0823413D
	.string "レポートを かいて\nしゅうりょう なさいますか……?"
	.byte EOS
	.if (. - gText_Rom_23413D) > 0x1b
	.error "gText_Rom_23413D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23413D) < 0x1b
	.space 0x1b - (. - gText_Rom_23413D)
	.endif
