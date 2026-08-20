	@ data/maps/MeteorFalls_1F_2R/scripts.inc:103 MeteorFalls_1F_2R_Text_JohnDefeat (+2 aliases)
	.globl gText_Rom_2134A4
gText_Rom_2134A4: @ 0x082134A4
	.string "ゲン『おやおや\nまけたよ ばあさん{EOS}"
	.if (. - gText_Rom_2134A4) > 0x12
	.error "gText_Rom_2134A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2134A4) < 0x12
	.space 0x12 - (. - gText_Rom_2134A4)
	.endif
