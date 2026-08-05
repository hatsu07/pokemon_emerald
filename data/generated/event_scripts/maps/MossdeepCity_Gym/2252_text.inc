	@ data/maps/MossdeepCity_Gym/scripts.inc:465 MossdeepCity_Gym_Text_CliffordPostBattle
	.globl gText_Rom_20BD63
gText_Rom_20BD63: @ 0x0820BD63
	.string "この ジムの リーダーも そりゃもう!\nわかくて げんき はつらつ ですぞ$"
	.if (. - gText_Rom_20BD63) > 0x26
	.error "gText_Rom_20BD63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BD63) < 0x26
	.space 0x26 - (. - gText_Rom_20BD63)
	.endif
