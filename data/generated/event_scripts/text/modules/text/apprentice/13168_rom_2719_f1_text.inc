	@ data/text/apprentice.inc:670 gText_ApprenticeMonThanks15
	.globl gText_Rom_2719F1
gText_Rom_2719F1: @ 0x082719F1
	.string "{STR_VAR_1}…… ほんとうかね?\pいや ほんとう なら いいんだ\nどうも ありがとう\lこんな わたし でも\lなんとか つかい こなせると いいな\pでは いずれまた あおう!$"
	.if (. - gText_Rom_2719F1) > 0x53
	.error "gText_Rom_2719F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2719F1) < 0x53
	.space 0x53 - (. - gText_Rom_2719F1)
	.endif
