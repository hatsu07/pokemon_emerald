	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:261 BattleFrontier_OutsideEast_Text_ConquerLeagueAndFrontier
	.globl gText_Rom_222C98
gText_Rom_222C98: @ 0x08222C98
	.string "わたしの やぼうは\nバトルフロンティア そして ポケモンリーグ\lすべての ちょうてんに たつ ことだ!\pそして もし それが かなったら!\pとっ となりの いえの ミミちゃんに\nおともだちに なって くださいって いうぞ!$"
	.if (. - gText_Rom_222C98) > 0x70
	.error "gText_Rom_222C98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222C98) < 0x70
	.space 0x70 - (. - gText_Rom_222C98)
	.endif
