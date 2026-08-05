	@ data/text/apprentice.inc:667 gText_ApprenticeWhichMon15
	.globl gText_Rom_271971
gText_Rom_271971: @ 0x08271971
	.string "ん?\n{PLAYER}{KUN}の ように みえるが……\lほんもの なのかね?\pいや ほんもの なら いいんだ\nついでに でしの わたしに\lじょげんを おねがい したい!\pわたしが つかう ポケモンの ことだが\n{STR_VAR_1}と {STR_VAR_2}であれば\lどちらが わたしに ふさわしい かな?$"
	.if (. - gText_Rom_271971) > 0x80
	.error "gText_Rom_271971 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271971) < 0x80
	.space 0x80 - (. - gText_Rom_271971)
	.endif
