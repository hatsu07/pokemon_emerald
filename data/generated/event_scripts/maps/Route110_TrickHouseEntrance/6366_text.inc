	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:739 Route110_TrickHouseEntrance_Text_NextTimeUseThisTrick
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23D4DC
gText_Rom_23D4DC: @ 0x0823D4DC
	.string "さて こんどの しかけは\nあんなことや こんなことを……\pうふふ われながら\nむずかしいぞ… むふふ"
	.byte EOS
	.if (. - gText_Rom_23D4DC) != 0x33
	.error "gText_Rom_23D4DC must retain its original byte length"
	.endif
	.globl gText_Rom_23D50B
	.set gText_Rom_23D50B, gText_Rom_23D4DC + 0x2f
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
