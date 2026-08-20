	@ data/maps/MauvilleCity/scripts.inc:494 MauvilleCity_Text_WallyMyUncleWontKnowImStrong
	.globl gText_Rom_1DDF95
gText_Rom_1DDF95: @ 0x081DDF95
	.string "ミツル『{PLAYER}さんが\nぼくと しょうぶ してくれないと……\pおじさんに ぼくが つよくなったこと\nわかって もらえないよ……{EOS}"
	.if (. - gText_Rom_1DDF95) > 0x3e
	.error "gText_Rom_1DDF95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DDF95) < 0x3e
	.space 0x3e - (. - gText_Rom_1DDF95)
	.endif
