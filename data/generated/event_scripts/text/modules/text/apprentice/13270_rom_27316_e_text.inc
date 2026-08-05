	@ data/text/apprentice.inc:823 gText_ApprenticePickWinSpeech9
	.globl gText_Rom_27316E
gText_Rom_27316E: @ 0x0827316E
	.string "ハッローウ\nハロウ {PLAYER}{KUN}!\pおじさん そろそろ あちこちで\nしょうぶが したく なって きたよ!\lそこで そのまえに きみに\lアドバイスを もらいたいんだ プリーズ!\pおじさんが もし しょうぶに かったら\nあいての トレーナーに むかって\lじまん するような ことばって ないかな?$"
	.if (. - gText_Rom_27316E) > 0x91
	.error "gText_Rom_27316E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27316E) < 0x91
	.space 0x91 - (. - gText_Rom_27316E)
	.endif
