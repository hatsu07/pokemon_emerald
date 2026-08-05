	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:267 BattleFrontier_OutsideEast_Text_ThriveInDarkness
	.globl gText_Rom_222D54
gText_Rom_222D54: @ 0x08222D54
	.string "くらやみが だいすきな わたし……\nそう…… わたしに ふさわしい のは……\lやはり この バトルピラミッド……\pネ…… あなたも くらやみの なかを\nひっしに さまよって みない……?$"
	.if (. - gText_Rom_222D54) > 0x5e
	.error "gText_Rom_222D54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222D54) < 0x5e
	.space 0x5e - (. - gText_Rom_222D54)
	.endif
