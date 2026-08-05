	@ data/maps/MossdeepCity_Gym/scripts.inc:468 MossdeepCity_Gym_Text_MaceyIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_20BD89
gText_Rom_20BD89: @ 0x0820BD89
	.string "まだよ\nまだ ジムリーダーには あわせないわよ!$"
	.if (. - gText_Rom_20BD89) != 0x19
	.error "gText_Rom_20BD89 must retain its original byte length"
	.endif
