	@ data/text/trainers.inc:1769 Route117_Text_DerekPostBattle
	.globl gText_Rom_25DF3E
gText_Rom_25DF3E: @ 0x0825DF3E
	.string "すきな ことばかり していたら\nいつのまにか マニアって よばれてるよ!\pまあ むしポケモンに くわしいからね\nマニアと よばれて とうぜん なのさっ!$"
	.if (. - gText_Rom_25DF3E) > 0x4d
	.error "gText_Rom_25DF3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DF3E) < 0x4d
	.space 0x4d - (. - gText_Rom_25DF3E)
	.endif
