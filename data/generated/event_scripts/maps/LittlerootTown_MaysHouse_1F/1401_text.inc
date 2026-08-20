	@ data/maps/LittlerootTown_MaysHouse_1F/scripts.inc:319 RivalsHouse_1F_Text_OhYoureTheNewNeighbor
	.globl gText_Rom_1F0678
gText_Rom_1F0678: @ 0x081F0678
	.string "えーと どなた かしら?\p…… …… ……\n…… …… ……\pそうか あなたが おとなりに\nひっこしてきた {PLAYER}{KUN} ね!\pうちにも あなたと おなじ としごろの\n{STR_VAR_1}が いるのよ!\p「あたらしい おともだちが できる!」\nなんて いって\lとっても たのしみに してたの!{EOS}"
	.if (. - gText_Rom_1F0678) > 0x89
	.error "gText_Rom_1F0678 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0678) < 0x89
	.space 0x89 - (. - gText_Rom_1F0678)
	.endif
