	@ data/text/apprentice.inc:586 gText_ApprenticeMonThanks1
	.globl gText_Rom_270EEF
gText_Rom_270EEF: @ 0x08270EEF
	.string "へえ\n{STR_VAR_1}が いいのか!\lじゃあ そうするー!\pせんせい ありがと!"
	.byte EOS
	.if (. - gText_Rom_270EEF) > 0x23
	.error "gText_Rom_270EEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270EEF) < 0x23
	.space 0x23 - (. - gText_Rom_270EEF)
	.endif

	@ data/text/apprentice.inc:589 gText_ApprenticeWhichMon2
	.globl gText_Rom_270F12
gText_Rom_270F12: @ 0x08270F12
	.string "{PLAYER}さん こんにちは!\nちょっと しつもん させて ください!\p{STR_VAR_1} と {STR_VAR_2} で\nどっちを つかうか なやんでるんです!\pどっちの ポケモンが\nつよいと おもいますか?$"
	.if (. - gText_Rom_270F12) > 0x56
	.error "gText_Rom_270F12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270F12) < 0x56
	.space 0x56 - (. - gText_Rom_270F12)
	.endif
