	@ data/text/apprentice.inc:568 gText_ApprenticeMonFirstThanks14
	.globl gText_Rom_270C83
gText_Rom_270C83: @ 0x08270C83
	.string "よ よし!\n{STR_VAR_1}から だして みるよ\pうう はずかし がらずに\nがんばれる かな……?\pありがとう {PLAYER}{KUN}\nまた こんど あえたら…… よろしくね"
	.byte EOS
	.if (. - gText_Rom_270C83) > 0x4b
	.error "gText_Rom_270C83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270C83) < 0x4b
	.space 0x4b - (. - gText_Rom_270C83)
	.endif
