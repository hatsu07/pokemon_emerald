	@ data/maps/MauvilleCity/scripts.inc:486 MauvilleCity_Text_WallyWillYouBattleMe
	.globl gText_Rom_1DDF37
gText_Rom_1DDF37: @ 0x081DDF37
	.string "ミツル『あっ! {PLAYER}さん!\pぼく あれから つよくなったんだ!\pそれを {PLAYER}さんにも\nおじさんにも わかって もらいたいんです!\p{PLAYER}さん おねがいです!\nぼくと しょうぶ してください{EOS}"
	.if (. - gText_Rom_1DDF37) > 0x5e
	.error "gText_Rom_1DDF37 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DDF37) < 0x5e
	.space 0x5e - (. - gText_Rom_1DDF37)
	.endif
