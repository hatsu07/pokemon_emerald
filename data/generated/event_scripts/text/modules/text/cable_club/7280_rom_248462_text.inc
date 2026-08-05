	@ data/text/cable_club.inc:231 MossdeepCity_GameCorner_1F_Text_OnlyDodrioAllowed
	.globl gText_Rom_248462
gText_Rom_248462: @ 0x08248462
	.string "「ドードリオのきのみどり」は\nドードリオ だけが\lさんか できる ゲームなんだよ$"
	.if (. - gText_Rom_248462) > 0x29
	.error "gText_Rom_248462 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248462) < 0x29
	.space 0x29 - (. - gText_Rom_248462)
	.endif
