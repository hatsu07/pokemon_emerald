	@ data/text/apprentice.inc:445 gText_ApprenticeThanksHeldItem13
	.globl gText_Rom_26FD78
gText_Rom_26FD78: @ 0x0826FD78
	.string "ん わかった {STR_VAR_1}な!\nじゃあ ポケモンの うでは ぶじだから\lさっそく もたせてみるよ!\pこれからも おれを よろしく たのむよ!"
	.byte EOS
	.if (. - gText_Rom_26FD78) > 0x43
	.error "gText_Rom_26FD78 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FD78) < 0x43
	.space 0x43 - (. - gText_Rom_26FD78)
	.endif
