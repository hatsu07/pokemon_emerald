	@ data/text/apprentice.inc:845 gText_ApprenticeWinSpeechThanks12
	.globl gText_Rom_27353F
gText_Rom_27353F: @ 0x0827353F
	.string "{STR_VAR_1}\pオーラーイ オーライ!\nじゃ さっそく それでいくぜェ!\pってオレ もう\nきくことが なくなったぜ!\lしかたねー これで おわかれする!?\lとかいって どこかで ちゃっかり\lまた あえちゃったり するかも!?\pまー とりあえずは おわかれだぜ!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lじゃあな {PLAYER}さん! スキだぜェ!$"
	.if (. - gText_Rom_27353F) > 0xa7
	.error "gText_Rom_27353F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27353F) < 0xa7
	.space 0xa7 - (. - gText_Rom_27353F)
	.endif
