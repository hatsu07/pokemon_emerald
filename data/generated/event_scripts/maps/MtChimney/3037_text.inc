	@ data/maps/MtChimney/scripts.inc:553 MtChimney_Text_MaxieIntro
	.globl gText_Rom_2150AB
gText_Rom_2150AB: @ 0x082150AB
	.string "マツブサ『ん? だれだ おまえは\p…… …… ……\n…… …… ……\pさいきん アクアだんの かつどうを\nじゃまする こどもがいる と\lアオギリの やつが ぼやいて いたが\lそれは おまえの ことか\p……ふん!\nわれわれ マグマだんの じゃまも\lしてくれようって わけだな!\pいいか? いきものは りくちに あがり\nしんかを くりかえしてきた\pそう だいちこそが すべてなのだ!\pだから われわれ マグマだんは\nだいちを ふやすことで\lひとと ポケモンの はってんを めざす!\pそのために ひつよう なのが\nこのやまに ねむる アイツ……\pおっと! そんなことまで\nおまえが しる ひつようは なかったな\pそんなことより\nわれわれの じゃまを したら どうなるか\lおまえに わからせて やろう!$"
	.if (. - gText_Rom_2150AB) > 0x15c
	.error "gText_Rom_2150AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2150AB) < 0x15c
	.space 0x15c - (. - gText_Rom_2150AB)
	.endif
