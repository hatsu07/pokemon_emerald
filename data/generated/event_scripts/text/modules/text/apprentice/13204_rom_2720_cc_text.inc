	@ data/text/apprentice.inc:724 gText_ApprenticeMoveThanks8
	.globl gText_Rom_2720CC
gText_Rom_2720CC: @ 0x082720CC
	.string "ああぁ ありがとう ございますっ!\n{STR_VAR_1} ですねっ\lりょうかいで ありますっ!\pでは また こんど\nいろいろと おしえて くださいね!$"
	.if (. - gText_Rom_2720CC) > 0x44
	.error "gText_Rom_2720CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2720CC) < 0x44
	.space 0x44 - (. - gText_Rom_2720CC)
	.endif
