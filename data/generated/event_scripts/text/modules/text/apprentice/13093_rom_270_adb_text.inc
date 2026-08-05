	@ data/text/apprentice.inc:556 gText_ApprenticeMonFirstThanks12
	.globl gText_Rom_270ADB
gText_Rom_270ADB: @ 0x08270ADB
	.string "{STR_VAR_1}だって! イエス!\nじゃ そうしてみる!!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lまた あおうぜ!!"
	.byte EOS
	.if (. - gText_Rom_270ADB) > 0x39
	.error "gText_Rom_270ADB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270ADB) < 0x39
	.space 0x39 - (. - gText_Rom_270ADB)
	.endif
