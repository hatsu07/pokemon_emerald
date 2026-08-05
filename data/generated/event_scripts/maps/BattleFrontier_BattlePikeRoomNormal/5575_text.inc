	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:689 BattleFrontier_BattlePikeRoomNormal_Text_KirliaStop
	.globl gText_Rom_234D39
gText_Rom_234D39: @ 0x08234D39
	.string "おいっ!\nキルリア!! やめなさいっ!"
	.byte EOS
	.if (. - gText_Rom_234D39) > 0x14
	.error "gText_Rom_234D39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234D39) < 0x14
	.space 0x14 - (. - gText_Rom_234D39)
	.endif
