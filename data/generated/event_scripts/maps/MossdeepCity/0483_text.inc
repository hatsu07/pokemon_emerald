	@ data/maps/MossdeepCity/scripts.inc:348 MossdeepCity_Text_GymSign
	.globl gText_Rom_1E1B87
gText_Rom_1E1B87: @ 0x081E1B87
	.string "トクサネ シティ ポケモンジム\nリーダー フウ ラン\lしんぴの コンビネーション!!$"
	.if (. - gText_Rom_1E1B87) > 0x2b
	.error "gText_Rom_1E1B87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1B87) < 0x2b
	.space 0x2b - (. - gText_Rom_1E1B87)
	.endif
