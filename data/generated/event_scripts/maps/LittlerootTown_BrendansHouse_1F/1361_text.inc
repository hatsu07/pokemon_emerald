	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:351 PlayersHouse_1F_Text_IsThatAPokenav
	.globl gText_Rom_1EFC89
gText_Rom_1EFC89: @ 0x081EFC89
	.string "ママ『なあに それ? ポケナビ?\nデボンの ひとから いただいたの?\pじゃあ ママの ことも\nとうろくして もらっちゃおうかな!\p…… …… ……$"
	.if (. - gText_Rom_1EFC89) > 0x4a
	.error "gText_Rom_1EFC89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFC89) < 0x4a
	.space 0x4a - (. - gText_Rom_1EFC89)
	.endif
