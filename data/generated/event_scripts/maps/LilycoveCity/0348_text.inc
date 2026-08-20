	@ data/maps/LilycoveCity/scripts.inc:423 LilycoveCity_Text_MayNotRaisingPokemon
	.globl gText_Rom_1E0733
gText_Rom_1E0733: @ 0x081E0733
	.string "ハルカ『えー なんで?\n{PLAYER}{KUN} ポケモン そだててないの?\pそれじゃあ トレーナーとして\nまだまだ ね!{EOS}"
	.if (. - gText_Rom_1E0733) > 0x36
	.error "gText_Rom_1E0733 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0733) < 0x36
	.space 0x36 - (. - gText_Rom_1E0733)
	.endif
