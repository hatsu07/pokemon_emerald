	@ data/maps/MeteorFalls_1F_1R/scripts.inc:286 MeteorFalls_1F_1R_Text_ArchieFarewell
	.globl gText_Rom_212F67
gText_Rom_212F67: @ 0x08212F67
	.string "アオギリ『{PLAYER}…… おまえも\nマグマだんには ようじん するんだな\pでは さらばだ!$"
	.if (. - gText_Rom_212F67) > 0x2b
	.error "gText_Rom_212F67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_212F67) < 0x2b
	.space 0x2b - (. - gText_Rom_212F67)
	.endif
