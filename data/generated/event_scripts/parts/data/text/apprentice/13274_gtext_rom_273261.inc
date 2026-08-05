	@ data/text/apprentice.inc:830 gText_ApprenticePickWinSpeech10
	.globl gText_Rom_273261
gText_Rom_273261: @ 0x08273261
	.string "{PLAYER}{KUN} たいへんだーっ!\pおいら しょうぶに かつと\n1じかんも えばっちゃうんだ!\p……なんてね ウソなんだよ! うっはは\pじつは おいら ひとと はなし するの\nあんまり とくいじゃ なくてさ!\lひとつ どうだろ\lおいらが しょうぶに かったときに\lいう ことばを\lししょうが きめて くれない かな?$"
	.if (. - gText_Rom_273261) > 0x9b
	.error "gText_Rom_273261 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273261) < 0x9b
	.space 0x9b - (. - gText_Rom_273261)
	.endif
