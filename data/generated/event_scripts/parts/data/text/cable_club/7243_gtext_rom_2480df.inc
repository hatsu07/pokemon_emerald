	@ data/text/cable_club.inc:175 CableClub_Text_NeedTwoMonsForUnionRoom
	.globl gText_Rom_2480DF
gText_Rom_2480DF: @ 0x082480DF
	.string "ユニオンルームに はいるには\n2ひき いじょうの ポケモンを\lもって おこしください$"
	.if (. - gText_Rom_2480DF) > 0x2b
	.error "gText_Rom_2480DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2480DF) < 0x2b
	.space 0x2b - (. - gText_Rom_2480DF)
	.endif
