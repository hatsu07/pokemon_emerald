	@ data/text/apprentice.inc:430 gText_ApprenticeThanksHeldItem12
	.globl gText_Rom_26FBF5
gText_Rom_26FBF5: @ 0x0826FBF5
	.string "{STR_VAR_1}だってエェ!\nじゃ さっそく もたせてみるよ!!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lまた あおうぜ!!"
	.byte EOS
	.if (. - gText_Rom_26FBF5) > 0x3c
	.error "gText_Rom_26FBF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FBF5) < 0x3c
	.space 0x3c - (. - gText_Rom_26FBF5)
	.endif
