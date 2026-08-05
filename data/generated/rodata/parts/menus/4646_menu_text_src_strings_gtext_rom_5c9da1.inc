	@ src/strings.c:275 gText_PkmnNeedsToReplaceMove (+1 aliases)
	.globl gText_Rom_5C9DA1
gText_Rom_5C9DA1: @ 0x085C9DA1
	.string "{STR_VAR_1}は あたらしく\n{STR_VAR_2}を おぼえたい……!\pしかし {STR_VAR_1}は わざを 4つ\nおぼえるので せいいっぱいだ!\p{STR_VAR_2}の かわりに\nほかの わざを わすれさせますか?$"
	.if (. - gText_Rom_5C9DA1) > 0x51
	.error "gText_Rom_5C9DA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9DA1) < 0x51
	.space 0x51 - (. - gText_Rom_5C9DA1)
	.endif
