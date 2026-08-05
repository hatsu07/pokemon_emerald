	@ data/text/apprentice.inc:652 gText_ApprenticeMonThanks12
	.globl gText_Rom_2717B1
gText_Rom_2717B1: @ 0x082717B1
	.string "{STR_VAR_1}だってエェ!\nじゃ さっそく さがしてみるよ!!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lまた あおうぜ!!$"
	.if (. - gText_Rom_2717B1) > 0x3c
	.error "gText_Rom_2717B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2717B1) < 0x3c
	.space 0x3c - (. - gText_Rom_2717B1)
	.endif
