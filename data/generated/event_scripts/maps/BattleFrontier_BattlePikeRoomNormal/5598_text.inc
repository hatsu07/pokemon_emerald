	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:727 BattleFrontier_BattlePikeRoomNormal_Text_AttacksWhenStartled
	.globl gText_Rom_234E0C
gText_Rom_234E0C: @ 0x08234E0C
	.string "きゅうに ひとを みると おどろいて\nおそいかかって しまうのだ……\pきみも ポケモンも だいじょうぶか?"
	.byte EOS
	.if (. - gText_Rom_234E0C) > 0x36
	.error "gText_Rom_234E0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234E0C) < 0x36
	.space 0x36 - (. - gText_Rom_234E0C)
	.endif
