	@ data/text/trainers.inc:767 Route110_Text_AbigailIntro (+1 aliases)
	.globl gText_Rom_25B506
gText_Rom_25B506: @ 0x0825B506
	.string "トライアスロンは ハードな スポーツ\nすいえい じてんしゃ マラソンの\l3しゅもくを こなすのよ!$"
	.if (. - gText_Rom_25B506) > 0x32
	.error "gText_Rom_25B506 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B506) < 0x32
	.space 0x32 - (. - gText_Rom_25B506)
	.endif
