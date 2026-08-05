	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:732 BattleFrontier_BattlePikeRoomNormal_Text_ApologizeHopeMonsAreFine
	.globl gText_Rom_234E42
gText_Rom_234E42: @ 0x08234E42
	.string "すまなかったな……\nきみの ポケモンは ぶじか?"
	.byte EOS
	.if (. - gText_Rom_234E42) > 0x19
	.error "gText_Rom_234E42 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234E42) < 0x19
	.space 0x19 - (. - gText_Rom_234E42)
	.endif
