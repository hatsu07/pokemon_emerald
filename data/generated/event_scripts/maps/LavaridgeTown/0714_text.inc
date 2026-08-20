	@ data/maps/LavaridgeTown/scripts.inc:298 LavaridgeTown_Text_BrendanNiceBadgesTakeThis
	.globl gText_Rom_1E5A74
gText_Rom_1E5A74: @ 0x081E5A74
	.string "ユウキ『{PLAYER} ひさしぶり だな\nちょうしは どう?\pふうん……\nバッジは けっこう あつめてるんだな\pじゃ\nこいつを やろうかな?{EOS}"
	.if (. - gText_Rom_1E5A74) > 0x42
	.error "gText_Rom_1E5A74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5A74) < 0x42
	.space 0x42 - (. - gText_Rom_1E5A74)
	.endif
