	@ data/maps/LilycoveCity_DepartmentStore_3F/scripts.inc:57 LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon
	.globl gText_Rom_20AA89
gText_Rom_20AA89: @ 0x0820AA89
	.string "てっとりばやく ポケモンを つよくするなら\nどうぐを あたえるのが いちばん!\pタウリンなら こうげきりょく アップ!\nリゾチウムなら とくこう アップ だぜ!$"
	.if (. - gText_Rom_20AA89) > 0x51
	.error "gText_Rom_20AA89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20AA89) < 0x51
	.space 0x51 - (. - gText_Rom_20AA89)
	.endif
