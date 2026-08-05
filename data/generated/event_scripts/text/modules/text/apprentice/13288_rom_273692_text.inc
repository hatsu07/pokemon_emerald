	@ data/text/apprentice.inc:851 gText_ApprenticeWinSpeechThanks13
	.globl gText_Rom_273692
gText_Rom_273692: @ 0x08273692
	.string "{STR_VAR_1}\p…… …… ……いいよ\nそれ いいよ!\lダメだ なみだが また とまらないよ\pでも なみだと はなみずを こらえて\nそのセリフ つかわせて もらうよ!\pおれは もう {PLAYER}{KUN}に\nききたい ことは なくなった!\lこれからは ライバルだよ!\pん いままで ありがとうな!$"
	.if (. - gText_Rom_273692) > 0x89
	.error "gText_Rom_273692 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273692) < 0x89
	.space 0x89 - (. - gText_Rom_273692)
	.endif
