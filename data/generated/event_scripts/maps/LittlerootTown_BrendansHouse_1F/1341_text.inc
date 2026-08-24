	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:286 PlayersHouse_1F_Text_IsntItNiceInHere
	.globl gText_Rom_1EFA4C
gText_Rom_1EFA4C: @ 0x081EFA4C
	.string "ママ『ほら {PLAYER}!\nおうちの なかも すてき でしょ!{EOS}"
	.if (. - gText_Rom_1EFA4C) > 0x1c
	.error "gText_Rom_1EFA4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFA4C) < 0x1c
	.space 0x1c - (. - gText_Rom_1EFA4C)
	.endif
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
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:300 PlayersHouse_1F_Text_ArentYouInterestedInRoom
	.globl gText_Rom_1EFAE5
gText_Rom_1EFAE5: @ 0x081EFAE5
	.string "ママ『{PLAYER}\pじぶんの へやを みてこないの?{EOS}"
	.if (. - gText_Rom_1EFAE5) > 0x17
	.error "gText_Rom_1EFAE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFAE5) < 0x17
	.space 0x17 - (. - gText_Rom_1EFAE5)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:304 PlayersHouse_1F_Text_GoSetTheClock
	.globl gText_Rom_1EFAFC
gText_Rom_1EFAFC: @ 0x081EFAFC
	.string "ママ『{PLAYER}\pおへやの とけい あわせてきて{EOS}"
	.if (. - gText_Rom_1EFAFC) > 0x16
	.error "gText_Rom_1EFAFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFAFC) < 0x16
	.space 0x16 - (. - gText_Rom_1EFAFC)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:308 PlayersHouse_1F_Text_OhComeQuickly
	.globl gText_Rom_1EFB12
gText_Rom_1EFB12: @ 0x081EFB12
	.string "ママ『……あ! {PLAYER}! {PLAYER}!\nはやく こっちに いらっしゃい!{EOS}"
	.if (. - gText_Rom_1EFB12) > 0x21
	.error "gText_Rom_1EFB12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFB12) < 0x21
	.space 0x21 - (. - gText_Rom_1EFB12)
	.endif
