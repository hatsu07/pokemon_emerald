	@ data/maps/Route103/scripts.inc:306 Route103_Text_MayTimeToHeadBack
	.globl gText_Rom_1E6F20
gText_Rom_1E6F20: @ 0x081E6F20
	.string "ハルカ『あたし おとうさんが\nあなたの ことを ちゅうもく するのも\lわかるような きが する!\pだって もらって すぐの ポケモンが\nもう あなたに なついているもの!\pあなたなら どんな ポケモンとでも\nなかよく なれるかも!\pじゃあ\nけんきゅうじょに かえろっか!{EOS}"
	.if (. - gText_Rom_1E6F20) > 0x88
	.error "gText_Rom_1E6F20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E6F20) < 0x88
	.space 0x88 - (. - gText_Rom_1E6F20)
	.endif
