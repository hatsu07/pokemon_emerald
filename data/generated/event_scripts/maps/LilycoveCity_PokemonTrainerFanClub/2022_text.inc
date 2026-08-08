	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:614 LilycoveCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou
	.globl gText_Rom_208FC6
gText_Rom_208FC6: @ 0x08208FC6
	.string "……わたし いつまでも {PLAYER}の こと\nおうえん する からね！\pわたし もう {PLAYER}の まける\nとこなんて みたくないよ\p{PLAYER} ほんとは\nつよいんだ もんね！$"
	.if (. - gText_Rom_208FC6) > 0x4f
	.error "gText_Rom_208FC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208FC6) < 0x4f
	.space 0x4f - (. - gText_Rom_208FC6)
	.endif
