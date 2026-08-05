	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:793 BattleFrontier_BattlePikeRoomNormal_Text_LucyFrontierPass
	.globl gText_Rom_235060
gText_Rom_235060: @ 0x08235060
	.string "アザミ『…… …… …… ……\p…… …… フロンティアパス……"
	.byte EOS
	.if (. - gText_Rom_235060) > 0x21
	.error "gText_Rom_235060 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_235060) < 0x21
	.space 0x21 - (. - gText_Rom_235060)
	.endif
