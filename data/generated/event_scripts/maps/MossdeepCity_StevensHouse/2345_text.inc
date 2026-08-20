	@ data/maps/MossdeepCity_StevensHouse/scripts.inc:172 MossdeepCity_StevensHouse_Text_LetterFromSteven
	.globl gText_Rom_20CB77
gText_Rom_20CB77: @ 0x0820CB77
	.string "てがみが ある!\p…… …… ……\n…… …… ……\p{PLAYER}{KUN}へ\pボクは おもうことが あって\nしばらく しゅぎょうを つづける\lとうぶん いえに かえらない\pそこで おねがいだ\pつくえの うえにある\nモンスターボールを うけとって ほしい\pなかに いるのは ダンバルといって\nボクの おきにいりの ポケモンだから\pよろしく たのむよ\pでは また いつか あおう!\n      ツワブキ ダイゴより{EOS}"
	.if (. - gText_Rom_20CB77) > 0xc8
	.error "gText_Rom_20CB77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20CB77) < 0xc8
	.space 0xc8 - (. - gText_Rom_20CB77)
	.endif
