	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:381 BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome
	.globl gText_Rom_21F30D
gText_Rom_21F30D: @ 0x0821F30D
	.string "おや…… バトルドームに\nちょうせん されますか?\pでは おたがい かちあがって\nおあい できるように がんばりましょう"
	.byte EOS
	.if (. - gText_Rom_21F30D) > 0x3d
	.error "gText_Rom_21F30D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F30D) < 0x3d
	.space 0x3d - (. - gText_Rom_21F30D)
	.endif
