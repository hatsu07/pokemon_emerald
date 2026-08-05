	@ data/maps/Route128/scripts.inc:253 Route128_Text_MaxieResposibilityFallsToArchieAndMe
	.globl gText_Rom_1EF0C6
gText_Rom_1EF0C6: @ 0x081EF0C6
	.string "マツブサ『{PLAYER} なにも いうな\pわたしに アオギリを せめる\nしかくが ないことは わかっている……\pこんな ことに なった いじょう\nもう にんげんの ちからでは\lどうする ことも できない だろう\pしかし だから といって\nだまって みている わけにも いかない\pこの あとしまつを つけるのは\nわたしと アオギリの やくめ…… か……$"
	.if (. - gText_Rom_1EF0C6) > 0xab
	.error "gText_Rom_1EF0C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EF0C6) < 0xab
	.space 0xab - (. - gText_Rom_1EF0C6)
	.endif
