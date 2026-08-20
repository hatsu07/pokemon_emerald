	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:330 BattleFrontier_OutsideEast_Text_OnceAnOddTreePastHere
	.globl gText_Rom_2233CD
gText_Rom_2233CD: @ 0x082233CD
	.string "もしもし あんたさんは\nものおぼえは いいほう ですかい?\pあたしには このさきに へんな きが\nあった ような きが するんですわ…{EOS}"
	.if (. - gText_Rom_2233CD) > 0x44
	.error "gText_Rom_2233CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2233CD) < 0x44
	.space 0x44 - (. - gText_Rom_2233CD)
	.endif
