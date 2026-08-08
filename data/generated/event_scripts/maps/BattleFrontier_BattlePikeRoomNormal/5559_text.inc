	@ data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.inc:646 BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreOneMon
	.globl gText_Rom_234C58
gText_Rom_234C58: @ 0x08234C58
	.string "おお きみは ツイてるな\pいまの わしは ちょっとだけ\nきげんが いいからな\pきみの ポケモンを 1ひき だけ\nかいふくして あげようじゃ ないか!"
	.byte EOS
	.if (. - gText_Rom_234C58) > 0x4b
	.error "gText_Rom_234C58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_234C58) < 0x4b
	.space 0x4b - (. - gText_Rom_234C58)
	.endif
