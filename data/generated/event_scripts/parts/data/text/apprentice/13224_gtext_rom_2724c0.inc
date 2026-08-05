	@ data/text/apprentice.inc:754 gText_ApprenticeMoveThanks13
	.globl gText_Rom_2724C0
gText_Rom_2724C0: @ 0x082724C0
	.string "ん わかった {STR_VAR_1}な!\nじゃあ カゼが なおったら\lゴホ おしえて みるよ!\pこれからも おれを よろしく たのむよ!$"
	.if (. - gText_Rom_2724C0) > 0x3c
	.error "gText_Rom_2724C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2724C0) < 0x3c
	.space 0x3c - (. - gText_Rom_2724C0)
	.endif
