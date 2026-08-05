	@ data/text/apprentice.inc:814 gText_ApprenticeWinSpeechThanks7
	.globl gText_Rom_272F7B
gText_Rom_272F7B: @ 0x08272F7B
	.string "{STR_VAR_1}\pですのね……!\pああ! なんだか わたくし\nうまれかわれる きが しますわ……!\lさっそく そのことば つかってみますわ!\pそれでは ここで おわかれです……\n{PLAYER}さんの ごしどう\lわたくし けっして わすれずに\lみなさまと たたかって まいります!\pまた いずれ……\nごきげんよう!$"
	.if (. - gText_Rom_272F7B) > 0x92
	.error "gText_Rom_272F7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272F7B) < 0x92
	.space 0x92 - (. - gText_Rom_272F7B)
	.endif
