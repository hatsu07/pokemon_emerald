	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:290 MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection
	.globl gText_Rom_20D15F
gText_Rom_20D15F: @ 0x0820D15F
	.string "ロケットを はっしゃ するには\n1パーセントの ミスも ゆるされない\p99パーセント だいじょうぶ でも\n1パーセント ダメなら\lすべてが ダメになる きびしい ものだ\pそれでも やりとげようと するのは\nそこに ロマンが つまっている からだな{EOS}"
	.if (. - gText_Rom_20D15F) > 0x7c
	.error "gText_Rom_20D15F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20D15F) < 0x7c
	.space 0x7c - (. - gText_Rom_20D15F)
	.endif
