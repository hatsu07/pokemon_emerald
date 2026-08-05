	@ data/text/cable_club.inc:280 CableClub_Text_AskAboutLinking
	.globl gText_Rom_248916
gText_Rom_248916: @ 0x08248916
	.string "こんにちは! {PLAYER}さん!\pポケモンセンター 2かいの\nあんないやく アオナです\pなにか つうしんで おこまりですか?$"
	.if (. - gText_Rom_248916) > 0x3b
	.error "gText_Rom_248916 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248916) < 0x3b
	.space 0x3b - (. - gText_Rom_248916)
	.endif
