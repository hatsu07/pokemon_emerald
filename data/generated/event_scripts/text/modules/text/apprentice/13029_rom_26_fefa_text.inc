	@ data/text/apprentice.inc:460 gText_ApprenticeThanksHeldItem14
	.globl gText_Rom_26FEFA
gText_Rom_26FEFA: @ 0x0826FEFA
	.string "よ よし!\n{STR_VAR_1}に してみるよ\pうう てれるな\nかっこ よすぎない かな……?\pありがとう {PLAYER}{KUN}\nまた こんど あえたら…… よろしくね"
	.byte EOS
	.if (. - gText_Rom_26FEFA) > 0x47
	.error "gText_Rom_26FEFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FEFA) < 0x47
	.space 0x47 - (. - gText_Rom_26FEFA)
	.endif
