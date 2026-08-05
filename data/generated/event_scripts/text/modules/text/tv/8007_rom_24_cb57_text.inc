	@ data/text/tv.inc:46 BattleFrontier_BattleTowerLobby_Text_ThatsGreatLine
	.globl gText_Rom_24CB57
gText_Rom_24CB57: @ 0x0824CB57
	.string "かっこいー!!\pいい きめゼリフ ですね\nつぎの たたかいも きたい してますよ\pそれでは また!$"
	.if (. - gText_Rom_24CB57) > 0x32
	.error "gText_Rom_24CB57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CB57) < 0x32
	.space 0x32 - (. - gText_Rom_24CB57)
	.endif
