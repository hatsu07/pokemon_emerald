	@ data/text/apprentice.inc:760 gText_ApprenticeMoveThanks14
	.globl gText_Rom_27258E
gText_Rom_27258E: @ 0x0827258E
	.string "よ よし {STR_VAR_1}\nいって みるよ!\pそんな わざを おしえるなんて\nて てれるな……\pありがとう {PLAYER}{KUN}\nまた こんど あえたら…… よろしくね$"
	.if (. - gText_Rom_27258E) > 0x49
	.error "gText_Rom_27258E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27258E) < 0x49
	.space 0x49 - (. - gText_Rom_27258E)
	.endif
