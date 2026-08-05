	@ data/text/apprentice.inc:595 gText_ApprenticeWhichMon3
	.globl gText_Rom_270F98
gText_Rom_270F98: @ 0x08270F98
	.string "{PLAYER}さん……!\nあの あたしの ことなんて\lどうせ わすれて しまいました よね\p……それでも いいです から\nそうだんに のって ください……\pあたし そだてたい ポケモン ひとつ\nじぶんで きめられなくって……\l{STR_VAR_1} か {STR_VAR_2}\lどちらかに する までは きまったけど\lそこで まよってしまって……\p{PLAYER}さん いやかも しれませんが\nあたしの かわりに きめてください!$"
	.if (. - gText_Rom_270F98) > 0xbb
	.error "gText_Rom_270F98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270F98) < 0xbb
	.space 0xbb - (. - gText_Rom_270F98)
	.endif
