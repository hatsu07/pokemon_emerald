	@ data/text/trainers.inc:1805 Route117_Text_AnnaPostRematch
	.globl gText_Rom_25E133
gText_Rom_25E133: @ 0x0825E133
	.string "ミホ『あなたの ポケモン\nなかなかの コンビネーションしてる!\pそうね あたしたちの\nつぎ ぐらいに すごいんじゃない?{EOS}"
	.if (. - gText_Rom_25E133) > 0x3d
	.error "gText_Rom_25E133 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E133) < 0x3d
	.space 0x3d - (. - gText_Rom_25E133)
	.endif
