	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:685 BattleFrontier_BattlePikeRoomNormal_Text_WatchOut
	.globl gText_Rom_234D2A
gText_Rom_234D2A: @ 0x08234D2A
	.string "!!\pきみ! あぶないっ!!"
	.byte EOS
	.if (. - gText_Rom_234D2A) > 0xf
	.error "gText_Rom_234D2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234D2A) < 0xf
	.space 0xf - (. - gText_Rom_234D2A)
	.endif
