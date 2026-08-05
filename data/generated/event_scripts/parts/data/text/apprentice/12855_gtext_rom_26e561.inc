	@ data/text/apprentice.inc:202 gText_ApprenticeLevelModeThanks12
	.globl gText_Rom_26E561
gText_Rom_26E561: @ 0x0826E561
	.string "{STR_VAR_1}だって!\nじゃ そこ いってみるよ!!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lまた あおうぜ!!"
	.byte EOS
	.if (. - gText_Rom_26E561) > 0x37
	.error "gText_Rom_26E561 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E561) < 0x37
	.space 0x37 - (. - gText_Rom_26E561)
	.endif
