	@ data/maps/Route103/scripts.inc:334 Route103_Text_BrendanTimeToHeadBack
	.globl gText_Rom_1E703A
gText_Rom_1E703A: @ 0x081E703A
	.string "ユウキ『とうさんが\n{PLAYER}の ことを ちゅうもく するのも\lわかったような きが する……\pもらって すぐの ポケモンが\nもう なついているよ\p{PLAYER}なら どんな ポケモンとでも\nなかよく なれるかも しれないな\pじゃ\nけんきゅうじょに もどろうか{EOS}"
	.if (. - gText_Rom_1E703A) > 0x7b
	.error "gText_Rom_1E703A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E703A) < 0x7b
	.space 0x7b - (. - gText_Rom_1E703A)
	.endif
