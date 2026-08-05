	@ data/text/apprentice.inc:857 gText_ApprenticeWinSpeechThanks14
	.globl gText_Rom_2737A0
gText_Rom_2737A0: @ 0x082737A0
	.string "{STR_VAR_1}\pよ よし それ\nいって みるよ!\lは はずかしいな いえるかな……\pありがとう {PLAYER}{KUN}\nさようならだ!\l{PLAYER}{KUN}に いわれた こと\lぜんぶ まもって ワシ がんばるよ!$"
	.if (. - gText_Rom_2737A0) > 0x59
	.error "gText_Rom_2737A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2737A0) < 0x59
	.space 0x59 - (. - gText_Rom_2737A0)
	.endif
