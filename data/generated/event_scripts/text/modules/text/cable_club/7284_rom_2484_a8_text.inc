	@ data/text/cable_club.inc:238 CableClub_Text_WelcomeWhichDirectCornerRoom
	.globl gText_Rom_2484A8
gText_Rom_2484A8: @ 0x082484A8
	.string "ポケモン ワイヤレス クラブ\nダイレクト コーナーに ようこそ!\pこちらでは ともだちと ちょくせつ\nやりとり できます\pどの へやに はいりますか?$"
	.if (. - gText_Rom_2484A8) > 0x4c
	.error "gText_Rom_2484A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2484A8) < 0x4c
	.space 0x4c - (. - gText_Rom_2484A8)
	.endif
