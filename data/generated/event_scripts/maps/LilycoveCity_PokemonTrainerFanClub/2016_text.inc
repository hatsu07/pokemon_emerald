	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:605 LilycoveCity_PokemonTrainerFanClub_Text_YouAndNormanAreDifferent
	.globl gText_Rom_208EE0
gText_Rom_208EE0: @ 0x08208EE0
	.string "きみも センリさんと おなじ ふんいき\nというか はくりょくが でてきたね\pしかし センリさん とは けっていてきに\nちがう ものが ある！\p……それは わたしからは いえない\nじぶんで さがして みるんだな{EOS}"
	.if (. - gText_Rom_208EE0) > 0x69
	.error "gText_Rom_208EE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208EE0) < 0x69
	.space 0x69 - (. - gText_Rom_208EE0)
	.endif
