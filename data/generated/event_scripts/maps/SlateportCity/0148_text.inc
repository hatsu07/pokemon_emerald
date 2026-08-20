	@ data/maps/SlateportCity/scripts.inc:1306 SlateportCity_Text_YouDroveTeamAquaAway
	.globl gText_Rom_1DD7F5
gText_Rom_1DD7F5: @ 0x081DD7F5
	.string "エニシダ『……あれ?\nきみとは まえに どこかで あったよね\pじこしょうかい したっけ?\nわたしは エニシダ って いうんだ\pいま ここから アクアだんが\nにげだして いったけど\lもしかして きみが やっつけたの かい?{EOS}"
	.if (. - gText_Rom_1DD7F5) > 0x6f
	.error "gText_Rom_1DD7F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD7F5) < 0x6f
	.space 0x6f - (. - gText_Rom_1DD7F5)
	.endif
