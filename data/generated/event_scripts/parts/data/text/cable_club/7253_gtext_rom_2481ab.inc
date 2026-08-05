	@ data/text/cable_club.inc:191 MossdeepCity_GameCorner_1F_Text_DescribeWhichGame
	.globl gText_Rom_2481AB
gText_Rom_2481AB: @ 0x082481AB
	.string "ぼくは ゲームの せつめいを\nしますよ!\lどの せつめいを ききますか?$"
	.if (. - gText_Rom_2481AB) > 0x25
	.error "gText_Rom_2481AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2481AB) < 0x25
	.space 0x25 - (. - gText_Rom_2481AB)
	.endif
