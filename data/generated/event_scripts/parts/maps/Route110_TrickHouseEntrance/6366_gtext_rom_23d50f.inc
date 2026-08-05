	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:742 Route110_TrickHouseEntrance_Text_InMidstOfDevisingNewChallenges
	.globl gText_Rom_23D50F
gText_Rom_23D50F: @ 0x0823D50F
	.string "わっ なんだ! あんたか!\pいま まだ つぎの しかけを\nかんがえちゅう なんだよ!\pもっと わがはいに\nかんがえる じかんを\lあたえて くれたって いいだろ!\lもうちょっと したら また きてくれ!"
	.byte EOS
	.if (. - gText_Rom_23D50F) > 0x65
	.error "gText_Rom_23D50F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D50F) < 0x65
	.space 0x65 - (. - gText_Rom_23D50F)
	.endif
