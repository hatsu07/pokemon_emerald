	@ data/maps/SootopolisCity/scripts.inc:1492 SootopolisCity_Text_InvolvedWithCrisisComeWithMe
	.globl gText_Rom_1E350F
gText_Rom_1E350F: @ 0x081E350F
	.string "ダイゴ『あそこで たたかって いるのは\nグラードン……\lそして カイオーガ……\pながい ねむりから めざめた\n2ひきの ちょうこだい ポケモンは\pやりばのない エネルギーを\nおたがいに ぶつけあっている……\p……{PLAYER}{KUN}\pここまで きた ということは\nきみは このじけんに かかわる\lかくごが できている ということだね\pよし! それなら\nきみに あわせたい ひとが いるんだ\pちょっと ボクに ついておいで{EOS}"
	.if (. - gText_Rom_1E350F) > 0xcd
	.error "gText_Rom_1E350F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E350F) < 0xcd
	.space 0xcd - (. - gText_Rom_1E350F)
	.endif
