	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:417 PlayersHouse_1F_Text_LatiEmergencyNewsFlash
	.globl gText_Rom_1EFED2
gText_Rom_1EFED2: @ 0x081EFED2
	.string "りんじ ニュース です\pホウエンちほうの かくちで\n……いろの ポケモンが とんでいた\lという じょうほうが よせられています\pいまのところ しょうたいは\nわかって いない ようです……\pでは ひきつづき\nえいがを おたのしみ ください$"
	.if (. - gText_Rom_1EFED2) > 0x77
	.error "gText_Rom_1EFED2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFED2) < 0x77
	.space 0x77 - (. - gText_Rom_1EFED2)
	.endif
