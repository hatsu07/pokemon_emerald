	@ data/maps/Route103/scripts.inc:321 Route103_Text_BrendanLetsBattle
	.globl gText_Rom_1E6FD0
gText_Rom_1E6FD0: @ 0x081E6FD0
	.string "おや? {PLAYER}!\p……そうか とうさん から\nポケモンを もらったのか\pじゃあ ついでだ\nポケモンしょうぶ してやろうか?\pトレーナーって どんな ものか\nオレが おしえてやるよ!{EOS}"
	.if (. - gText_Rom_1E6FD0) > 0x5a
	.error "gText_Rom_1E6FD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E6FD0) < 0x5a
	.space 0x5a - (. - gText_Rom_1E6FD0)
	.endif
