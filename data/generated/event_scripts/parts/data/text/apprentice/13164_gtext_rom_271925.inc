	@ data/text/apprentice.inc:664 gText_ApprenticeMonThanks14
	.globl gText_Rom_271925
gText_Rom_271925: @ 0x08271925
	.string "よ よし!\n{STR_VAR_1}で がんばって みるよ\pうう はずかし がらずに\nがんばれる かな……?\pありがとう {PLAYER}{KUN}\nまた こんど あえたら…… よろしくね$"
	.if (. - gText_Rom_271925) > 0x4c
	.error "gText_Rom_271925 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271925) < 0x4c
	.space 0x4c - (. - gText_Rom_271925)
	.endif
