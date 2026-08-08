	@ data/maps/LittlerootTown_MaysHouse_1F/scripts.inc:350 RivalsHouse_1F_Text_ShouldGoHomeEverySoOften
	.globl gText_Rom_1F07D8
gText_Rom_1F07D8: @ 0x081F07D8
	.string "ポケモンと いっしょに\nぼうけん するのも いいけど\pたまには おうちに かえって おかあさんに\nげんきな かおを みせてあげてね!\pこころの なかでは きっと\n{PLAYER}{KUN}の こと\lしんぱい してる はずだから……$"
	.if (. - gText_Rom_1F07D8) > 0x6b
	.error "gText_Rom_1F07D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F07D8) < 0x6b
	.space 0x6b - (. - gText_Rom_1F07D8)
	.endif
