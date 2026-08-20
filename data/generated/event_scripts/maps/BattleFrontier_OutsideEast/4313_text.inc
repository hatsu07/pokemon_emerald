	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:300 BattleFrontier_OutsideEast_Text_SometimesImportantOldManInThere
	.globl gText_Rom_223031
gText_Rom_223031: @ 0x08223031
	.string "ときどきねー ここの たてものに\nすっごく つよそーな ポケモン つれて\lすっごく えらそー だけど\lけっこー やさしそーな\lじーちゃんが はいってくのよ!{EOS}"
	.if (. - gText_Rom_223031) > 0x4f
	.error "gText_Rom_223031 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_223031) < 0x4f
	.space 0x4f - (. - gText_Rom_223031)
	.endif
