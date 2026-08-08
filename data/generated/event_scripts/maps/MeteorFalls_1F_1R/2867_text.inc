	@ data/maps/MeteorFalls_1F_1R/scripts.inc:261 MeteorFalls_1F_1R_Text_ArchieSeenYouBefore
	.globl gText_Rom_212E68
gText_Rom_212E68: @ 0x08212E68
	.string "アオギリ『おまえとは たしか……\nカイナの はくぶつかんでも あったが\pそうか {PLAYER}と いうのか\pあのときは マグマだんの したっぱだと\nおもったんだが\lふん……\lおかしな やつだな……\pマグマだん というのは\nりくちをふやす などと いっては\lはかいかつどうを くりかえす\lきけんな しゅうだんだ!\pうみを あいする われわれ アクアだんの\nしゅくてき なのだよ!$"
	.if (. - gText_Rom_212E68) > 0xb8
	.error "gText_Rom_212E68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_212E68) < 0xb8
	.space 0xb8 - (. - gText_Rom_212E68)
	.endif
