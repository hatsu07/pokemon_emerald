	@ data/maps/Route120/scripts.inc:387 Route120_Text_StevenUsedDevonScope
	.globl gText_Rom_1EDF1B
gText_Rom_1EDF1B: @ 0x081EDF1B
	.string "ダイゴは\nデボンスコープを つかった!\pとうめいに なっていた\nポケモンの すがたが まるわかりだ!\pポケモンは\nおどろいて おそいかかってきた!{EOS}"
	.if (. - gText_Rom_1EDF1B) > 0x4a
	.error "gText_Rom_1EDF1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EDF1B) < 0x4a
	.space 0x4a - (. - gText_Rom_1EDF1B)
	.endif
