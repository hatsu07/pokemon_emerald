	@ data/maps/BattleFrontier_BattlePalaceBattleRoom/scripts.inc:553 BattleFrontier_BattlePalaceBattleRoom_Text_SpenserYourTeamIsAdmirable
	.globl gText_Rom_22BBEF
gText_Rom_22BBEF: @ 0x0822BBEF
	.string "ウコン『いやはや よう やったわ!!\nぜんりょくの わが きょうだいが\lはが たたん とは なぁ!\pいやー おまえらは まことに すんばらしい!\nおーいっ! はやく あれを!!$"
	.if (. - gText_Rom_22BBEF) > 0x59
	.error "gText_Rom_22BBEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22BBEF) < 0x59
	.space 0x59 - (. - gText_Rom_22BBEF)
	.endif
