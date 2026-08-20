	@ data/maps/RustboroCity_Gym/scripts.inc:271 RustboroCity_Gym_Text_RoxannePostRematch
	.globl gText_Rom_202B41
gText_Rom_202B41: @ 0x08202B41
	.string "ツツジ『まだまだ ポケモン しょうぶは\nまなぶことが たくさん あるのですね\pわたくし…… ポケモン しょうぶが\nますます すきに なりましたよ!{EOS}"
	.if (. - gText_Rom_202B41) > 0x4a
	.error "gText_Rom_202B41 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202B41) < 0x4a
	.space 0x4a - (. - gText_Rom_202B41)
	.endif
