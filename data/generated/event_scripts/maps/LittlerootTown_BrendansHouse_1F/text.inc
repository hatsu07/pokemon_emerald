	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:286 PlayersHouse_1F_Text_IsntItNiceInHere
	.globl PlayersHouse_1F_Text_IsntItNiceInHere
PlayersHouse_1F_Text_IsntItNiceInHere: @ 0x081EFA4C
	.string "ママ『ほら {PLAYER}!\nおうちの なかも すてき でしょ!{EOS}"
	.if (. - PlayersHouse_1F_Text_IsntItNiceInHere) > 0x1c
	.error "PlayersHouse_1F_Text_IsntItNiceInHere may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_IsntItNiceInHere) < 0x1c
	.space 0x1c - (. - PlayersHouse_1F_Text_IsntItNiceInHere)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:290 PlayersHouse_1F_Text_MoversPokemonGoSetClock
	.globl PlayersHouse_1F_Text_MoversPokemonGoSetClock
PlayersHouse_1F_Text_MoversPokemonGoSetClock: @ 0x081EFA68
	.string "おうちの かたづけは\nひっこしやさんの ポケモンが\lてつだって くれるから らくちんね!\p{PLAYER}も 2かいに ある\nじぶんの おへやに いってごらん!\pパパが ひっこしの おいわいに\nかってくれた とけいが あるから\lじかんを あわせて おきなさいよ{EOS}"
	.if (. - PlayersHouse_1F_Text_MoversPokemonGoSetClock) > 0x7d
	.error "PlayersHouse_1F_Text_MoversPokemonGoSetClock may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_MoversPokemonGoSetClock) < 0x7d
	.space 0x7d - (. - PlayersHouse_1F_Text_MoversPokemonGoSetClock)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:300 PlayersHouse_1F_Text_ArentYouInterestedInRoom
	.globl PlayersHouse_1F_Text_ArentYouInterestedInRoom
PlayersHouse_1F_Text_ArentYouInterestedInRoom: @ 0x081EFAE5
	.string "ママ『{PLAYER}\pじぶんの へやを みてこないの?{EOS}"
	.if (. - PlayersHouse_1F_Text_ArentYouInterestedInRoom) > 0x17
	.error "PlayersHouse_1F_Text_ArentYouInterestedInRoom may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_ArentYouInterestedInRoom) < 0x17
	.space 0x17 - (. - PlayersHouse_1F_Text_ArentYouInterestedInRoom)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:304 PlayersHouse_1F_Text_GoSetTheClock
	.globl PlayersHouse_1F_Text_GoSetTheClock
PlayersHouse_1F_Text_GoSetTheClock: @ 0x081EFAFC
	.string "ママ『{PLAYER}\pおへやの とけい あわせてきて{EOS}"
	.if (. - PlayersHouse_1F_Text_GoSetTheClock) > 0x16
	.error "PlayersHouse_1F_Text_GoSetTheClock may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_GoSetTheClock) < 0x16
	.space 0x16 - (. - PlayersHouse_1F_Text_GoSetTheClock)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:308 PlayersHouse_1F_Text_OhComeQuickly
	.globl PlayersHouse_1F_Text_OhComeQuickly
PlayersHouse_1F_Text_OhComeQuickly: @ 0x081EFB12
	.string "ママ『……あ! {PLAYER}! {PLAYER}!\nはやく こっちに いらっしゃい!{EOS}"
	.if (. - PlayersHouse_1F_Text_OhComeQuickly) > 0x21
	.error "PlayersHouse_1F_Text_OhComeQuickly may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_OhComeQuickly) < 0x21
	.space 0x21 - (. - PlayersHouse_1F_Text_OhComeQuickly)
	.endif
