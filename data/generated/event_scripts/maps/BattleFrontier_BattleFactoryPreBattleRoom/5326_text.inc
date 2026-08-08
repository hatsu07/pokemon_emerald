	@ data/maps/BattleFrontier_BattleFactoryPreBattleRoom/scripts.inc:455 BattleFrontier_BattleFactoryPreBattleRoom_Text_HoldMonsChooseFromSelection
	.globl gText_Rom_2323B3
gText_Rom_2323B3: @ 0x082323B3
	.string "では まず おきゃくさまの\nポケモンを おあずかりして\lポケモンレンタルを おこないます!\lよーく かんがえて えらんで くださいよ!!"
	.byte EOS
	.if (. - gText_Rom_2323B3) > 0x45
	.error "gText_Rom_2323B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2323B3) < 0x45
	.space 0x45 - (. - gText_Rom_2323B3)
	.endif
