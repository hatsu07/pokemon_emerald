	@ data/maps/RustboroCity_Gym/scripts.inc:259 RustboroCity_Gym_Text_RoxannePreRematch (+1 aliases)
	.globl gText_Rom_202ACB
gText_Rom_202ACB: @ 0x08202ACB
	.string "ツツジ『また おめにかかれましたね\nジムリーダーの ツツジ です\pあれから おたがいに\nいくつもの しょうぶを けいけんし\lどれほど つよく なれたのか……\pさあ おてあわせ ねがいます!{EOS}"
	.if (. - gText_Rom_202ACB) > 0x5f
	.error "gText_Rom_202ACB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202ACB) < 0x5f
	.space 0x5f - (. - gText_Rom_202ACB)
	.endif
