	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:290 PlayersHouse_1F_Text_MoversPokemonGoSetClock
	.globl gText_Rom_1EFA68
gText_Rom_1EFA68: @ 0x081EFA68
	.string "おうちの かたづけは\nひっこしやさんの ポケモンが\lてつだって くれるから らくちんね!\p{PLAYER}も 2かいに ある\nじぶんの おへやに いってごらん!\pパパが ひっこしの おいわいに\nかってくれた とけいが あるから\lじかんを あわせて おきなさいよ{EOS}"
	.if (. - gText_Rom_1EFA68) > 0x7d
	.error "gText_Rom_1EFA68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFA68) < 0x7d
	.space 0x7d - (. - gText_Rom_1EFA68)
	.endif
