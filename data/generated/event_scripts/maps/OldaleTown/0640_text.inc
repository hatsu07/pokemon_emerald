	@ data/maps/OldaleTown/scripts.inc:359 OldaleTown_Text_PotionExplanation
	.globl gText_Rom_1E4B0F
gText_Rom_1E4B0F: @ 0x081E4B0F
	.string "どんな ときでも つかえる\nキズぐすりは ばあいに よっては\lポケモンセンターより たよりに なるからね$"
	.if (. - gText_Rom_1E4B0F) > 0x35
	.error "gText_Rom_1E4B0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E4B0F) < 0x35
	.space 0x35 - (. - gText_Rom_1E4B0F)
	.endif
