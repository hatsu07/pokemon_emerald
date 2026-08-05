	@ data/maps/MtChimney/scripts.inc:685 MtChimney_Text_ArchieThankYou
	.globl gText_Rom_2155D8
gText_Rom_2155D8: @ 0x082155D8
	.string "アオギリ『{PLAYER}…… たすかったよ\nおまえの おかげで マグマだんの\lはかいかつどうを ふせぐことが できた\pだが おまえは……\nどちらの みかた なんだ……\pまあ いい\pわれわれは ひきつづき\nマグマだんを おいかけると しよう!\p{PLAYER} おまえとは また\nどこかで あうことに なりそうだな……$"
	.if (. - gText_Rom_2155D8) > 0x94
	.error "gText_Rom_2155D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2155D8) < 0x94
	.space 0x94 - (. - gText_Rom_2155D8)
	.endif
