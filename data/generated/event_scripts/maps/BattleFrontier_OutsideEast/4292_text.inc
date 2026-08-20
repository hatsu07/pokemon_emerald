	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:270 BattleFrontier_OutsideEast_Text_PutTogetherUltimateTeam
	.globl gText_Rom_222DB2
gText_Rom_222DB2: @ 0x08222DB2
	.string "いっしゅうかん ねないで かんがえた\nオレの さいきょう チーム……\lまけるきが しねえぜ!\pぃよーし アリーナに なぐりこみだー!{EOS}"
	.if (. - gText_Rom_222DB2) > 0x43
	.error "gText_Rom_222DB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222DB2) < 0x43
	.space 0x43 - (. - gText_Rom_222DB2)
	.endif
