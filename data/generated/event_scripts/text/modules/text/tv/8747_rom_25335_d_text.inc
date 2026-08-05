	@ data/text/tv.inc:1156 GabbyAndTy_Text_TyNotEnoughMons (+1 aliases)
	.globl gText_Rom_25335D
gText_Rom_25335D: @ 0x0825335D
	.string "ダイ『きみは 1ぴきしか ポケモンを\nもって ないのかい?\pポケモンが いっぱい いたほうが\nいい えいぞうに なるんだが……"
	.byte EOS
	.if (. - gText_Rom_25335D) > 0x40
	.error "gText_Rom_25335D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25335D) < 0x40
	.space 0x40 - (. - gText_Rom_25335D)
	.endif
