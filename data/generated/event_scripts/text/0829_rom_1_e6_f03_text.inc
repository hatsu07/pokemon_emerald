	@ data/maps/Route103/scripts.inc:289 Route103_Text_MayRoute103Pokemon
	.globl Route103_Text_MayRoute103Pokemon
Route103_Text_MayRoute103Pokemon: @ 0x081E6E71
	.string "ハルカ『えーと 103ばん どうろに いる\nポケモンは あれと あれね……{EOS}"
	.if (. - Route103_Text_MayRoute103Pokemon) > 0x26
	.error "Route103_Text_MayRoute103Pokemon may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_MayRoute103Pokemon) < 0x26
	.space 0x26 - (. - Route103_Text_MayRoute103Pokemon)
	.endif
	@ data/maps/Route103/scripts.inc:293 Route103_Text_MayLetsBattle
	.globl gText_Rom_1E6E97
gText_Rom_1E6E97: @ 0x081E6E97
	.string "あら {PLAYER}{KUN}!\p……そうか! おとうさん から\nポケモンを プレゼントして もらったのね!\pせっかくだから ちょっと\nポケモンしょうぶ しようよ!\pトレーナーって どんな ものか\nあたしが おしえて あげるから!{EOS}"
	.if (. - gText_Rom_1E6E97) > 0x6c
	.error "gText_Rom_1E6E97 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E6E97) < 0x6c
	.space 0x6c - (. - gText_Rom_1E6E97)
	.endif

	@ trainerbattle-cfg:0x1E6B59 TrainerBattleText_1E6F03
	.globl gText_Rom_1E6F03
gText_Rom_1E6F03: @ 0x081E6F03
	.string "うわっ！　すごい　すごい！\n{0xFD}{0x01}{0xFD}{0x05}　つよい　じゃない！{EOS}"
	.if (. - gText_Rom_1E6F03) > 0x1d
	.error "gText_Rom_1E6F03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E6F03) < 0x1d
	.space 0x1d - (. - gText_Rom_1E6F03)
	.endif
