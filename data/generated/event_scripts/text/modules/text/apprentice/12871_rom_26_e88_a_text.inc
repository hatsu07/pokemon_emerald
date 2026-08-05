	@ data/text/apprentice.inc:226 gText_ApprenticeLevelModeThanks14
	.globl gText_Rom_26E88A
gText_Rom_26E88A: @ 0x0826E88A
	.string "よ よし!\nそれで がんばって みるよ\pうう はずかし がらずに\nがんばれる かな……?\pありがとう {PLAYER}{KUN}\nまた こんど あえたら…… よろしくね"
	.byte EOS
	.if (. - gText_Rom_26E88A) > 0x4c
	.error "gText_Rom_26E88A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E88A) < 0x4c
	.space 0x4c - (. - gText_Rom_26E88A)
	.endif
