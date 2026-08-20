	@ data/maps/MeteorFalls_1F_2R/scripts.inc:103 MeteorFalls_1F_2R_Text_JohnDefeat (+2 aliases)
	.globl gText_Rom_21330B
gText_Rom_21330B: @ 0x0821330B
	.string "ゲン『おやおや\nまけたよ ばあさん{EOS}"
	.if (. - gText_Rom_21330B) > 0x12
	.error "gText_Rom_21330B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21330B) < 0x12
	.space 0x12 - (. - gText_Rom_21330B)
	.endif
