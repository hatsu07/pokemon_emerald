	@ data/text/apprentice.inc:748 gText_ApprenticeMoveThanks12
	.globl gText_Rom_272404
gText_Rom_272404: @ 0x08272404
	.string "{STR_VAR_1}で オーライ!\nじゃ さっそく おぼえさせるぜェ!!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lまた あおうぜ!!$"
	.if (. - gText_Rom_272404) > 0x3e
	.error "gText_Rom_272404 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272404) < 0x3e
	.space 0x3e - (. - gText_Rom_272404)
	.endif
