	@ data/maps/LavaridgeTown/scripts.inc:398 LavaridgeTown_Text_GymSign
	.globl gText_Rom_1E5E1B
gText_Rom_1E5E1B: @ 0x081E5E1B
	.string "フエン タウン ポケモンジム\nリーダー アスナ\lやけど しそうな じょうねつの ひと{EOS}"
	.if (. - gText_Rom_1E5E1B) > 0x2b
	.error "gText_Rom_1E5E1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5E1B) < 0x2b
	.space 0x2b - (. - gText_Rom_1E5E1B)
	.endif
