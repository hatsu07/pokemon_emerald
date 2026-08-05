	@ data/text/apprentice.inc:427 gText_ApprenticeThanksNoHeldItem12
	.globl gText_Rom_26FBB9
gText_Rom_26FBB9: @ 0x0826FBB9
	.string "もたせないってエェ!\nじゃ いうとおりに するよ!!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lまた あおうぜ!!"
	.byte EOS
	.if (. - gText_Rom_26FBB9) > 0x3c
	.error "gText_Rom_26FBB9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FBB9) < 0x3c
	.space 0x3c - (. - gText_Rom_26FBB9)
	.endif
