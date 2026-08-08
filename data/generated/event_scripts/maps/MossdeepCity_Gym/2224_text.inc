	@ data/maps/MossdeepCity_Gym/scripts.inc:423 MossdeepCity_Gym_Text_MauraIntro (+1 aliases)
	.globl gText_Rom_20BBAB
gText_Rom_20BBAB: @ 0x0820BBAB
	.string "あなたが これまで あゆんできた みちのり\nあなたが けいけん してきた ことがら\pすべてを ぶつけて きなさい!$"
	.if (. - gText_Rom_20BBAB) > 0x3a
	.error "gText_Rom_20BBAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BBAB) < 0x3a
	.space 0x3a - (. - gText_Rom_20BBAB)
	.endif
