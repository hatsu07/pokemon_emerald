	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:693 BattleFrontier_BattlePikeRoomNormal_Text_DusclopsStop
	.globl gText_Rom_234D4D
gText_Rom_234D4D: @ 0x08234D4D
	.string "おいっ!\nサマヨール!! やめなさいっ!"
	.byte EOS
	.if (. - gText_Rom_234D4D) > 0x15
	.error "gText_Rom_234D4D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234D4D) < 0x15
	.space 0x15 - (. - gText_Rom_234D4D)
	.endif
