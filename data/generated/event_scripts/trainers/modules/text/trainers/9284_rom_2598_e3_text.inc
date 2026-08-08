	@ data/text/trainers.inc:85 Route103_Text_LivNotEnoughPokemon (+2 aliases)
	.globl gText_Rom_2598E3
gText_Rom_2598E3: @ 0x082598E3
	.string "ルミ『あたしたちと たたかいたいなら\nポケモンを 2ひき つれてないと ダメよ!\lじゃないと しょうぶに ならないんだから!"
	.byte EOS
	.if (. - gText_Rom_2598E3) > 0x3f
	.error "gText_Rom_2598E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2598E3) < 0x3f
	.space 0x3f - (. - gText_Rom_2598E3)
	.endif
