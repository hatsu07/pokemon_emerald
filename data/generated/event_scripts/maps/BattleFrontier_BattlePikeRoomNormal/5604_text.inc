	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:740 BattleFrontier_BattlePikeRoomNormal_Text_BattleSomewhatToughTrainer
	.globl gText_Rom_234E6D
gText_Rom_234E6D: @ 0x08234E6D
	.string "ようこそ……\pこちらでは しょうしょう うでの たつ\nトレーナーと たたかって いただきます……"
	.byte EOS
	.if (. - gText_Rom_234E6D) > 0x31
	.error "gText_Rom_234E6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234E6D) < 0x31
	.space 0x31 - (. - gText_Rom_234E6D)
	.endif
