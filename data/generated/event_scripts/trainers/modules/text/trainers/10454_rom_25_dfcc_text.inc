	@ data/text/trainers.inc:1778 Route117_Text_AnnaPostBattle
	.globl gText_Rom_25DFCC
gText_Rom_25DFCC: @ 0x0825DFCC
	.string "ミホ『あなたの ポケモン\nなかなかの コンビネーション してる!\pそうね あたしたちの\nつぎ ぐらいに すごいんじゃない?$"
	.if (. - gText_Rom_25DFCC) > 0x3e
	.error "gText_Rom_25DFCC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DFCC) < 0x3e
	.space 0x3e - (. - gText_Rom_25DFCC)
	.endif
